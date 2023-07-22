# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: betapan <betapan@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 17:40:15 by pvaladar          #+#    #+#              #
#    Updated: 2023/07/16 12:25:32 by betapan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
RM		= rm -f

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

LIB1	= ar -rcs
LIB2	= ranlib

SRCS_MAND	=	ft_printf.c \
				ft_putchar.c \
				ft_putnbr_base.c \
				ft_putnbr.c \
				ft_putptr.c \
				ft_putstr.c \
				ft_strlen.c \
				ft_u_putnbr_base.c

OBJS_MAND	=	${SRCS_MAND:.c=.o}

$(NAME)	:	$(OBJS_MAND)
			$(LIB1) $(NAME) $(OBJS_MAND)
			$(LIB2) $(NAME)

all		:	$(NAME)

%.o		:	%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean	:	
			$(RM) $(OBJS_MAND)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

