/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:06:45 by betapan           #+#    #+#             */
/*   Updated: 2023/07/18 09:01:46 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	printed;

	if (!s)
		return (ft_putstr("(null)"));
	printed = 0;
	while (*s != '\0')
	{
		if (ft_putchar(*s++) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}
