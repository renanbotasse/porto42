# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 19:59:41 by rbotasse          #+#    #+#              #
#    Updated: 2022/12/04 20:00:19 by rbotasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_printf.c \
	  ft_putchar_n.c \
	  ft_putd_n.c \
	  ft_putp_n.c \
	  ft_puts_n.c \
	  ft_putu_n.c \
	  ft_putx_n.c \

OBJ = $(SRC:.c=.o)
%.o: %.c
	@cc $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) ta feito crl"
	@ranlib $(NAME)
	@echo "$(NAME) ta indexado crl"

clean: 
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re