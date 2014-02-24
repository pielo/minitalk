# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/15 17:42:42 by tlloancy          #+#    #+#              #
#    Updated: 2014/02/09 12:03:08 by tlloancy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

export CC=gcc
export CFLAGS=-W -Wall -Werror -Wextra
export LDFLAGS=
LIBFT_DIR=libft
NAME=$(LIBFT_DIR)/libft

all: $(NAME)

$(NAME):
	@(cd $(LIBFT_DIR) && $(MAKE))

.PHONY: clean mrproper $(NAME) $(NAME2)

mrproper: clean
	@(cd $(LIBFT_DIR) && $(MAKE) $@)
	@(cd $(LIBFT_DIR2) && $(MAKE) $@)

NCOL=\x1b[0m
VERT=\x1b[32;01m
JAUN=\x1b[33;01m
ROUG=\x1b[31;01m
BLEU=\x1b[34;01m

FLAGS = -Wall -Werror -Wextra
BIN = serveur
LIBHR = -I./libft/includes -L./libft -lft
FILES = server.c

cleanshell:
	@clear

all:
	@cc -g $(FLAGS) -o $(BIN) $(FILES) $(LIBHR)
	@echo "$(BLEU)Compilation de l'executable$(NCOL)\
		................... \
		$(VERT)[OK]$(NCOL)"

re: fclean all
	@echo "$(ROUG)[ MAKE RE EFFECTUE ]$(NCOL)"

clean:
	@echo "$(ROUG)[ MAKE CLEAN EFFECTUE ]$(NCOL)"
	@(cd $(LIBFT_DIR) && $(MAKE) $@)

fclean: clean
	@echo "$(ROUG)[ MAKE FCLEAN EFFECTUE ]$(NCOL)"
	@(cd $(LIBFT_DIR) && $(MAKE) $@)
