# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 19:59:41 by rbotasse          #+#    #+#              #
#    Updated: 2022/12/09 10:54:10 by rbotasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror 

SRC = ft_printf.c srcs/ft_putchar_n.c src/ft_putd_n.c srcs/ft_putp_n.c srcs/ft_puts_n.c srcs/ft_putu_n.c srcs/ft_putx_n.c
OBJ = $(SRC:.c=.o)
%.o: %.c
	@cc $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) FEITO"
	@ranlib $(NAME)
	@echo "$(NAME) .C TO .O"

clean: 
	@rm -f $(OBJ)
	@echo "CLEAN"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) DELETE"

re: fclean all

.PHONY: all, clean, fclean, re