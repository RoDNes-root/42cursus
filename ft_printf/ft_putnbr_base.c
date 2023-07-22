/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:05:07 by betapan           #+#    #+#             */
/*   Updated: 2023/07/18 12:23:10 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int n, char *base)
{
	size_t			printed;
	size_t			base_length;
	int				tmp;

	printed = 0;
	if (n < 0)
	{
		n = -n;
		if (ft_putchar('-') == -1)
			return (-1);
		printed++;
	}
	base_length = ft_strlen(base);
	if (n >= (long long int)base_length)
	{
		tmp = ft_putnbr_base(n / base_length, base);
		if (tmp == -1)
			return (-1);
		printed += tmp;
	}
	if (ft_putchar(base[n % base_length]) == -1)
		return (-1);
	return (++printed);
}
