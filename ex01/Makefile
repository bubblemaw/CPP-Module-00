# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masase <masase@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/25 14:23:45 by masase            #+#    #+#              #
#    Updated: 2025/05/25 14:37:44 by masase           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall  -Werror -Wextra -g -std=c++98

RM = rm -f

$(NAME) : 
		c++ $(OBJS) $(FLAGS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		
re: fclean all