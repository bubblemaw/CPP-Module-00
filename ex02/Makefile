# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maw <maw@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 23:20:45 by maw               #+#    #+#              #
#    Updated: 2025/05/30 23:27:40 by maw              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRCS = tests.cpp \
		Account.cpp \

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -g -std=c++98

RM = rm -f

$(NAME) : $(OBJS)
		c++  $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		
re: fclean all
