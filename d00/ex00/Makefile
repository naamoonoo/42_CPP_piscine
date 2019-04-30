NAME	=	megaphone

CC		=	clang++
WFLAG	=	-Wall -Werror -Wextra

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

all		:
			$(CC) $(WFLAG) -c $(SRC)
			$(CC) $(OBJ) -o $(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all
