##
## EPITECH PROJECT, 2019
## 
## File description:
## 
##

SRC 	=	main.c		\
			size.c 		\
			algo.c 		\
			load_and_fill.c 	\
		lib/libmy.a

NAME	= 	bsq


all: $(NAME)

$(NAME):
	make -C lib/my all
	gcc -o $(NAME) $(SRC) -g

clean:
	rm -f $(NAME) 

fclean: clean

re: fclean all

