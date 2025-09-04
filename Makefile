# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 19:54:07 by fgalvez-          #+#    #+#              #
#    Updated: 2024/03/25 18:44:10 by fgalvez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a

INCLUDE = libft.h
SRC = ft_strlen.c \
	ft_isdigit.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_isascii.c\
	ft_isalnum.c \
	ft_strchr.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strrchr.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strndup.c \
	ft_strnlen.c \
	ft_isspace.c \
	ft_atol.c \
	ft_strcspn.c \
	ft_realloc.c
OBJ = $(SRC:.c=.o)


.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		@ar rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
