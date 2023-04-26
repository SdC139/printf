# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 08:57:55 by sde-carl          #+#    #+#              #
#    Updated: 2023/04/20 08:57:59 by sde-carl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*variabili*/

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = ./
LIBFT_DIR = ./libft/
LIBFT_NAME = libft.a
SRC_FILES = 


OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_NAME))

/*target*/
all: $(NAME)

$(NAME): $(OBJS)
	(cd $(LIBFT_DIR) && make)
	@cp $(LIBFT) .
	@mv $(LIBFT_NAME) $(NAME)
	ar -rcs $(NAME) $(OBJS)

%o: %c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): $(SRCS)

clean:
	(cd $(LIBFT_DIR) && make clean)
	rm -f $(NAME)

re: fclean all

usage:

