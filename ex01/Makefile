# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 17:41:48 by mstrauss          #+#    #+#              #
#    Updated: 2024/09/19 19:46:24 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -stdlib=libc++
INC			=	-Iincludes/

HEADERS 	=	phonebook.hpp

SRC_DIRS	=	./srcs
vpath %.cpp $(SRC_DIRS)
vpath %.hpp includes
SRC 		=	phonebook.cpp

OBJ_DIR		=	./obj
OBJ 		= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -stdlib=libc++

$(OBJ_DIR)/%.o: %.cpp $(HEADERS) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re