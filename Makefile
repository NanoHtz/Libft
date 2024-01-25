# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 19:54:07 by fgalvez-          #+#    #+#              #
#    Updated: 2024/01/25 19:54:07 by fgalvez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_strlen.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_strchr.c ft_toupper.c ft_tolower.c 

OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)


%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
