# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 18:47:24 by ecaruso           #+#    #+#              #
#    Updated: 2023/03/07 17:25:27 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
SRC = ft_printf.c \
ft_printf_utils.c \
ft_printf_utils_hex.c

OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c
all : $(NAME)

$(NAME) :
		$(GCC) $(FLAGS) $(SRC) -I.
		ar rcs $(NAME) $(OBJ)

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

