# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 11:11:47 by rbotasse          #+#    #+#              #
#    Updated: 2022/12/11 11:11:53 by rbotasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c ft_printer.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJS)
	ar -cr $(NAME) $(OBJS) 

%.o:%.c ft_printf.h
	cc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re: fclean all
