# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:52:44 by phuocngu          #+#    #+#              #
#    Updated: 2024/10/29 15:00:38 by phuocngu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS += -Wall -Wextra -Werror

SRC_DIR =

INC_DIR =

SRC_FILES = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c

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
