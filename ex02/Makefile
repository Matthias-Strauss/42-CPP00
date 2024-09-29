# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 17:41:48 by mstrauss          #+#    #+#              #
#    Updated: 2024/09/29 18:31:30 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++17 -stdlib=libc++
INC			=   -I$(CURDIR)

SRC 		=	tests.cpp\
				Account.cpp

HEADER		=	Contact.hpp\
				Account.hpp

# OBJ_DIR		=	./obj
OBJ 		=	$(SRC:.cpp=.o)

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re