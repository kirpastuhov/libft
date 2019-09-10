# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/05 12:40:17 by kpastuhox         #+#    #+#              #
#    Updated: 2019/09/05 12:24:03 by kpastuhox        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUTPUT  = test

LIB     = libft.a

FLAGS   = -Wall -Wextra -Werror

SRC 	= test.c

SRCS    = src/*.c

OBJS    = *.o

HEADERS = includes/libft.h

RED='\033[1;31m'
BLUE='\033[1;36m'
GREEN='\033[1;32m'
NC='\033[0m' # No Color

INFO= ${BLUE}"[INFO]"${NC}
REMOVED = ${RED}"removed!"${NC}
CREATED = ${GREEN}"created!"${NC}

all: $(OUTPUT) lib
	gcc -o $(OUTPUT) $(OBJS)
	@echo ${GREEN}"Compiled successfully!"${NC}

$(OUTPUT): $(SRC) $(HEADERS)
	gcc $(FLAGS) -I $(HEADERS) -c $(SRC)

lib: 
		@gcc $(FLAGS) -c $(SRCS)
		@ar rc $(LIB) $(OBJS)
		@ranlib $(LIB)
		@echo ${INFO}"Library [$(LIB)]" ${CREATED}

clean:
		@/bin/rm -f $(OBJS)
		@echo ${INFO}"Objects           "${REMOVED}

fclean: clean
		@/bin/rm -f $(OUTPUT)
		@/bin/rm -f $(LIB)
		@echo ${INFO}"Executable [$(OUTPUT)] "${REMOVED}
		@echo ${INFO}"Library [$(LIB)] "${REMOVED}

re: fclean lib all
