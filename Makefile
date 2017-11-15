# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 16:33:09 by jjaniec           #+#    #+#              #
#    Updated: 2017/11/15 18:06:32 by jjaniec          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = ./srcs/
SRC_NAME = ft_atoi.c \
		   ft_bzero.c \
		   ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   ft_isdigit.c \
		   ft_isprint.c \
		   ft_itoa.c \
		   ft_memalloc.c \
		   ft_memccpy.c \
		   ft_memchr.c \
		   ft_memcmp.c \
		   ft_memcpy.c \
		   ft_memdel.c \
		   ft_memmove.c \
		   ft_memset.c \
		   ft_putchar.c \
		   ft_putchar_fd.c \
		   ft_putendl.c \
		   ft_putendl_fd.c \
		   ft_putnbr.c \
		   ft_putnbr_fd.c \
		   ft_strstr.c \
		   ft_putstr.c \
		   ft_putstr_fd.c \
		   ft_strcat.c \
		   ft_strchr.c \
		   ft_strclr.c \
		   ft_strcmp.c \
		   ft_strcpy.c \
		   ft_strdel.c \
		   ft_strdup.c \
		   ft_strequ.c \
		   ft_striter.c \
		   ft_striteri.c \
		   ft_strjoin.c \
		   ft_strlcat.c \
		   ft_strlen.c \
		   ft_strmap.c \
		   ft_strmapi.c \
		   ft_strncat.c \
		   ft_strncmp.c \
		   ft_strncpy.c \
		   ft_strnequ.c \
		   ft_strnew.c \
		   ft_strnstr.c \
		   ft_strrchr.c \
		   ft_strsplit.c \
		   ft_strsub.c \
		   ft_strtrim.c \
		   ft_tolower.c \
		   ft_toupper.c

OBJ_PATH = obj
OBJ_NAME = $(SRC_NAME:.c=.o)
LIB_NAME = libft.a
LIB_OBJ = libft.o
INC_PATH = -Iincludes
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ_PATH = ./objs/

all: $(LIB_OBJ)
	ar r $(LIB_NAME) ./*.o libft.h 2> /dev/null || true
	ranlib $(LIB_NAME)
	mv ./*.o $(OBJ_PATH) 2> /dev/null || true

$(LIB_OBJ):
	mkdir $(OBJ_PATH) 2> /dev/null || true
	cd $(SRC_PATH) && $(CC) $(CFLAGS) -c $(SRC_NAME) $(INC_PATH)
	cd $(SRC_PATH) && mv *.o ..

clean:
	rm -rf $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -rf $(LIB_NAME) 2> /dev/null || true
	rm a.out 2> /dev/null || true

re: fclean all
