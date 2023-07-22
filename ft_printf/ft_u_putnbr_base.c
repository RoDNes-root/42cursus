/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:06:55 by betapan           #+#    #+#             */
/*   Updated: 2023/07/18 09:31:54 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_putnbr_base(unsigned int n, char *base)
{
	size_t					printed;
	size_t					base_length;
	int						tmp;

	printed = 0;
	base_length = ft_strlen(base);
	if (n >= (uintptr_t)base_length)
	{
		tmp = ft_putnbr_base(n / base_length, base);
		if (tmp == -1)
			return (-1);
		printed += tmp;
	}
	if (ft_putchar(base[n % base_length]) == -1)
		return (-1);
	printed++;
	return (printed);
}
