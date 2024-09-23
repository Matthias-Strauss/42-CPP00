# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 17:41:48 by mstrauss          #+#    #+#              #
#    Updated: 2024/09/20 13:09:26 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -stdlib=libc++

SRC_DIRS	=	./srcs
vpath %.cpp $(SRC_DIRS)
SRC 		=	megaphone.cpp

OBJ_DIR		=	./obj
OBJ 		= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -stdlib=libc++

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re