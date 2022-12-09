# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 19:59:41 by rbotasse          #+#    #+#              #
#    Updated: 2022/12/09 11:07:14 by rbotasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror 

SRC = 	ft_printf.c \
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