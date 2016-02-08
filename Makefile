# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 15:01:31 by zkerkeb           #+#    #+#              #
#    Updated: 2015/11/30 16:30:54 by zkerkeb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC=ft_putchar.c ft_putstr.c ft_tolower.c ft_toupper.c ft_strlen.c \
  	ft_memset.c ft_strcpy.c ft_isascii.c ft_isalpha.c ft_isdigit.c \
    ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_putstr_fd.c \
    ft_putendl.c ft_putendl_fd.c ft_strdup.c ft_bzero.c ft_putnbr.c \
    ft_strchr.c ft_strrchr.c ft_atoi.c ft_strdel.c ft_memcpy.c \
    ft_memalloc.c ft_strclr.c ft_strncpy.c ft_memccpy.c ft_memmove.c \
    ft_memchr.c ft_memcmp.c ft_strcat.c ft_strncat.c ft_strlcat.c \
    ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_memdel.c \
    ft_strnew.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
    ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
    ft_strsplit.c ft_itoa.c ft_putnbr_fd.c ft_lstadd.c ft_lstiter.c \
	ft_lstmap.c ft_lstdel.c ft_lstdelone.c ft_lstnew.c

OBJ= $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): ./libft.h $(SRC)
		$(CC) $(FLAGS) -I . -c $(SRC)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
