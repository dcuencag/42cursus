# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 12:14:21 by dancuenc          #+#    #+#              #
#    Updated: 2025/01/15 12:14:22 by dancuenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_strlen.c \
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ) $(BONUS_OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all