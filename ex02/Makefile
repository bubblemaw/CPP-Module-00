# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maw <maw@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 23:20:45 by maw               #+#    #+#              #
#    Updated: 2025/07/25 14:38:21 by maw              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRCS = tests.cpp \
		Account.cpp \

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

$(NAME) : $(OBJS)
		c++  $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		
re: fclean all
