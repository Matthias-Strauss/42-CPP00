# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 14:38:40 by mstrauss          #+#    #+#              #
#    Updated: 2024/09/19 19:44:29 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -stdlib=libc++
INC			=	-Iincludes/

HEADERS 	=	

SRC_DIRS	=	./srcs
vpath %.cpp $(SRC_DIRS)
vpath %.hpp includes
SRC 		=	

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