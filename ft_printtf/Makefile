# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 12:28:21 by mtoia             #+#    #+#              #
#    Updated: 2022/03/30 10:57:14 by mtoia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_printf.c utils/ft_hexa.c utils/ft_printnbr.c utils/ft_putchar.c utils/ft_putstr.c \
					utils/ft_uprint.c utils/ft_itoa.c utils/ft_ptr.c utils/ft_calloc.c utils/ft_bzero.c utils/ft_memset.c
					
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS) 

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus