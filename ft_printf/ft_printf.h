/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:01:05 by betapan          #+#    #+#             */
/*   Updated: 2023/07/15 11:04:39 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef BASE10
#  define BASE10 "0123456789"
# endif

# ifndef BASE16LOWER
#  define BASE16LOWER "0123456789abcdef"
# endif

# ifndef BASE16UPPER
#  define BASE16UPPER "0123456789ABCDEF"
# endif

# include <stdarg.h>
# include <unistd.h> 

int		ft_printf(const char *format, ...);
int		format_parser(char format, va_list args);

int		ft_putchar(char c);
int		ft_putnbr_base(int n, char *base);
int		ft_putnbr(int n);
int		ft_putptr(uintptr_t n, char *base);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_u_putnbr_base(unsigned int n, char *base);

#endif
