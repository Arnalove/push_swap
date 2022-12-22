# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 19:37:05 by achansar          #+#    #+#              #
#    Updated: 2022/12/22 17:35:48 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#TARGET
NAME = push_swap

#PUSH_SWAP_FILES
SRC = 	main \
		instr1 instr2 \
		display

C_FILES = $(SRC:=.c)
OBJ = $(SRC:=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra

#LIBFT
LBFT = ./libft/
LBFT_LIB = $(addprefix $(LBFT), ft.a)
LBFT_INC = -I $(LBFT)
LBFT_LINK = -L $(LBFT) -l ft

#RULES
all: $(LBFT_LIB) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LBFT_LINK) -o $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $(LBFT_INC) $< -o $@ 

$(LBFT_LIB):
	make -C $(LBFT)

clean:
	make -C $(LBFT) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LBFT) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re