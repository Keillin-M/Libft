# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefiletest                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 15:06:17 by kmaeda            #+#    #+#              #
#    Updated: 2025/05/12 16:40:06 by kmaeda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ../srcs
INCLUDE_DIR = ../includes
TEST_FILES = $(wildcard *.c)
LIBFT_SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(TEST_FILES:.c=.o) $(LIBFT_SRC:.c=.o)

all: test

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

test: $(OBJ_FILES) 
	$(CC) $(CFLAGS) $(OBJ_FILES) -o test_program
	./test_program

clean:
	rm -f $(OBJ_FILES)

fclean:
	rm -f test_program

re: fclean test

.PHONY: all test clean fclean re
