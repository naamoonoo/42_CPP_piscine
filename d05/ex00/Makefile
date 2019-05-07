NAME	=	Bureaucrat

CC		=	clang++
WFLAG	=	-Wall -Werror -Wextra

SRC		=	$(wildcard *.cpp)
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:
			$(CC) $(WFLAG) -c $(SRC)
			$(CC) $(OBJ) -o $(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

