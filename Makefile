# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 22:39:49 by rmerzak           #+#    #+#              #
#    Updated: 2022/03/01 22:29:24 by rmerzak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra

HEADER = so_long.h

SRC =	so_long.c\
		utils/get_next_line.c\
		utils/get_next_line_utils.c\
		utils/ft_is_good_map.c\
		utils/ft_print_erreur.c\
		utils/ft_strncmp.c\
		utils/ft_init.c\
		utils/ft_join.c\
		utils/ft_substr.c\
		utils/ft_print_full.c\
		utils/ft_move_up.c\
		utils/ft_move_down.c\
		utils/ft_move_right.c\
		utils/ft_move_left.c\
		utils/ft_find_player.c\
		utils/ft_check_fin.c\
		utils/ft_printf.c\
		utils/ft_exit.c\
		utils/ft_freetab.c\
		utils/ft_check_walls.c\



OBJ_FILE = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ_FILE)
	@$(CC) $(CFLAGS) $(OBJ_FILE) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	@rm -rf $(OBJ_FILE)

fclean :
	@rm -rf $(OBJ_FILE) $(NAME)

re : fclean all

.PHONEY : all clean fclean re
