#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spliesei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:09:14 by spliesei          #+#    #+#              #
#    Updated: 2017/11/07 18:09:22 by spliesei         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC_DIR = srcs

HEADER_DIR = includes

SRC = $(SRC_DIR)/ft_*.c $(HEADER_DIR)/*.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) ft_*.o

clean:
	rm -f ft_*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
