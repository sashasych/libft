# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mharissa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 16:26:44 by mharissa          #+#    #+#              #
#    Updated: 2019/09/13 23:17:42 by mharissa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
NAMELIB = libft.a
SRCS = ft*.c
OBJECTS = *.o
all:
	@gcc -I libft.h -c $(SRCS)
	@ar rc $(NAMELIB) $(OBJECTS)
	@ranlib $(NAMELIB)
	@gcc main.c -L. -lft -o $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAMELIB)
	@/bin/rm -f $(NAME)

re: fclean all
