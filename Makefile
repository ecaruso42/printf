# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 18:47:24 by ecaruso           #+#    #+#              #
#    Updated: 2023/03/06 19:00:42 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
SRC = printf.c \
printf_utils.c \
printf_utils_hex.c

OBJ = ${SOURCES:.c=.o}
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

