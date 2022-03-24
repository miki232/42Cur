# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 12:28:21 by mtoia             #+#    #+#              #
#    Updated: 2022/03/24 09:48:06 by mtoia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_printf.c \
					utils/ft_hexa.c \
					utils/ft_printnbr.c \
					utils/ft_putchar.c \
					utils/ft_putstr.c \
					utils/ft_uprint.c \
					utils/ft_itoa.c \
					utils/ft_putchar_fd.c \
					utils/ft_ptr.c \
					utils/ft_calloc.c \
					utils/ft_bzero.c utils/ft_memset.c
					
					
OBJS			= $(SRCS:.c=.o)

BONUS			=	 

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcT $(NAME) $(OBJS) libft/libft.a

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus