/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:06:24 by betapan           #+#    #+#             */
/*   Updated: 2023/07/18 16:17:11 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;
	int		i;
	int		tmp;

	va_start(args, format);
	printed = 0;
	i = -1;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			tmp = format_parser(format[i + 1], args);
			if (tmp == -1)
				return (-1);
			printed += (tmp - 1);
			i++;
		}
		else if (ft_putchar(format[i]) == -1)
			return (-1);
		printed++;
	}
	va_end(args);
	return (printed);
}

int	format_parser(char format, va_list args)
{
	int	tmp;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		if (ft_putstr("0x") == -1)
			return (-1); 
		tmp = ft_putptr(va_arg(args, uintptr_t), BASE16LOWER);
		if (tmp == -1)
			return (-1);
		return (tmp + 2);
	}
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_u_putnbr_base(va_arg(args, unsigned int), BASE10));
	else if (format == 'x')
		return (ft_u_putnbr_base(va_arg(args, unsigned int), BASE16LOWER));
	else if (format == 'X')
		return (ft_u_putnbr_base(va_arg(args, unsigned int), BASE16UPPER));
	else
		return (ft_putchar('%'));
}

#include "stdio.h"
int main()
{
	printf("%d \n", printf("cspdiuxX%"));
	ft_printf("%d \n", ft_printf("cspdiuxX%"));
}