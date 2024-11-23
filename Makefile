##
## EPITECH PROJECT, 2024
## B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)	\
		$(wildcard lib/my/*.c)	\
		$(wildcard src/*.c)	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

EXEC	=	my_ls

CFLAGS	+=	-Wall -g3

all:	${EXEC}	gertrude

$(EXEC):	${OBJ}
	$(CC) -o $(EXEC) $(OBJ) $(CFLAGS)

clean:
	rm -f vgcore.* $(OBJ) *.gch

fclean:	clean
	rm -f $(EXEC)

re:	fclean	all

gertrude:
	@echo -e "\n\n\033[3mGertrude-CLI - Makefile creation tool\033[0m\n"

.PHONY:	all	clean	fclean	re	gertrude
