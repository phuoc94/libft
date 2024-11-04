# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:52:44 by phuocngu          #+#    #+#              #
#    Updated: 2024/11/04 12:50:36 by phuocngu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS += -Wall -Wextra -Werror

SRC_DIR =

INC_DIR =

SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c  ft_putnbr_fd.c \
ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

SRC_PATH = $(SRC_FILES)

SRC_HEADERS = libft.h

OBJS = $(SRC_PATH:.c=.o)

HEADERS = $(addprefix $(INC_DIR)/, $(SRC_HEADERS))

NAME = libft.a

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR) -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
