# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/15 17:42:42 by tlloancy          #+#    #+#              #
#    Updated: 2014/02/09 18:06:38 by tlloancy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C serveur
	make -C client

clean:
	make clean -C serveur
	make clean -C client

fclean:
	make fclean -C serveur
	make fclean -C client
	rm client/client
	rm serveur/serveur

re: fclean all
