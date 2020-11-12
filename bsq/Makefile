# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/03 14:18:18 by ekandaq           #+#    #+#              #
#    Updated: 2020/08/03 14:33:33 by ekandaq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
C_NAME = *.c
C_FLAGS = -Wall -Wextra -Werror
BIN_NAME = bsq

RM_CMD = rm -f *.o
FRM_CMD = rm -f $(BIN_NAME)

.PHONY: all clean fclean

all: $(BIN_NAME)

bsq: $(C_NAME)
	@$(CC) $(C_FLAGS) -o $(BIN_NAME) $(C_NAME)

main.o: bsq.c
	@$(CC) $(C_FLAGS) bsq.c

clean:
	@$(RM_CMD)

fclean: clean
	@$(FRM_CMD)
