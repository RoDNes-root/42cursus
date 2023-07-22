/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:06:38 by betapan           #+#    #+#             */
/*   Updated: 2023/07/18 12:34:45 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t n, char *base)
{
	size_t	printed;
	size_t	base_length;

	printed = 0;
	base_length = ft_strlen(base);
	if (n >= (uintptr_t)base_length)
	{
		printed += ft_putptr(n / base_length, base);
		printed += ft_putptr(n % base_length, base);
	}
	else
		printed += ft_putchar(base[n % base_length]);
	return (printed);
}
