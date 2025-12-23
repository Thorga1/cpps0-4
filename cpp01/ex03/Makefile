# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 16:17:58 by thorgal           #+#    #+#              #
#    Updated: 2025/10/09 12:41:06 by thorgal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clubfight

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
