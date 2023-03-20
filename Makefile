# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 18:47:24 by ecaruso           #+#    #+#              #
#    Updated: 2023/03/20 22:31:24 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c \
ft_printf_utils.c \
ft_printf_utils_hex.c \
ft_printf_bonus.c \
#main.c \


OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c
all : $(NAME)

bonus: all

$(NAME) :
		$(GCC) $(FLAGS) $(SRC) -I
		ar rcs $(NAME) $(OBJ)

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

