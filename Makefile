# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 19:37:05 by achansar          #+#    #+#              #
#    Updated: 2023/01/13 16:45:11 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#TARGET
NAME = push_swap

#ARGUMENTS
CC = gcc
FLAGS = -Wall -Werror -Wextra 
#SEG = -fsanitize=address -g

#PUSH_SWAP FILES
SRC_PATH = ./srcs/
SRC = 	algo \
		arguments \
		instr1 \
		instr2 \
		main \
		utils
C_FILES = $(addprefix $(SRC_PATH), $(SRC:=.c))
OBJ = $(addprefix $(SRC_PATH), $(SRC:=.o))

#LIBFT
LBFT_PATH = ./functions/
LBFT = 	ft_atoi \
		ft_isdigit\
	  	ft_split \
		ft_substr \
		ft_strlen \
		ft_strlcpy \
	  	ft_lstnew \
	  	ft_lstadd_front \
	  	ft_lstadd_back \
      	ft_lstsize \
		ft_lstlast \
	  	ft_lstclear \
	  	ft_printf \
		ft_printf_display
LBFT_FILES = $(addprefix $(LBFT_PATH), $(LBFT:=.c))
LBFT_OBJ = $(addprefix $(LBFT_PATH), $(LBFT:=.o))

#RULES
all: $(NAME)

$(NAME): $(OBJ) $(LBFT_OBJ)
	@ $(CC) $(FLAGS) $(OBJ) $(LBFT_OBJ) -o $(NAME)

.c.o:
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(LBFT_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re