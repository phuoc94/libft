# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:52:44 by phuocngu          #+#    #+#              #
#    Updated: 2024/11/07 16:49:59 by phuocngu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS += -Wall -Wextra -Werror

SRC_DIR = ../
INC_DIR = ../

SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c

BONUS_FILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

TEST_FILES = assert_equal_int.c assert_equal_ptr.c test_ft_isalpha.c test_ft_isdigit.c \
test_ft_isalnum.c test_ft_isascii.c test_ft_isprint.c test_ft_strrchr.c

vpath %.c $(SRC_DIR)

SRC_HEADERS = libft.h
OBJS = $(SRC_FILES:%.c=%.o)
BONUS_OBJS = $(BONUS_FILES:%.c=%.o)
TEST_OBJS = $(TEST_FILES:%.c=%.o)

HEADERS = $(addprefix $(INC_DIR)/, $(SRC_HEADERS))

NAME = libft.a
TEST_NAME = libtest.a
PROG = test_result

%.o: $(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR) -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

libtest: $(TEST_OBJS)
	ar rcs $(TEST_NAME) $(TEST_OBJS)

test: fclean $(NAME) bonus libtest
	$(CC) $(CFLAGS) -o $(PROG) main.c -L. -ltest -lft
	./$(PROG)

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(TEST_OBJS)

fclean: clean
	rm -f $(NAME) $(TEST_NAME) $(PROG)

re: fclean all

.PHONY: all clean fclean re bonus libtest test
