/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:06:34 by betapan           #+#    #+#             */
/*   Updated: 2023/07/15 14:32:13 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	size_t					printed;
	unsigned long long int	number;
	int						tmp;

	printed = 0;
	number = n;
	if (n < 0)
	{
		number = -number;
		printed++;
		if (ft_putchar('-') == -1)
			return (-1);
	}
	if (number >= 10)
	{
		tmp = ft_putnbr(number / 10);
		if (tmp == -1)
			return (-1);
		printed += tmp;
	}
	if (ft_putchar(number % 10 + '0') == -1)
		return (-1);
	return (++printed);
}
