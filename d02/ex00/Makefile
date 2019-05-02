NAME	=	fixed

CXX		=	clang++
CXXFLAG	=	-Wall -Werror -Wextra

SRC		=	$(wildcard *.cpp)
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

all		:
			$(CXX) $(CXXFLAG) -c $(SRC)
			$(CXX) $(OBJ) -o $(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all
