# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblood <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 13:31:11 by mblood            #+#    #+#              #
#    Updated: 2020/02/10 19:43:59 by mblood           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c -I $(HEADER)	
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a
	
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
