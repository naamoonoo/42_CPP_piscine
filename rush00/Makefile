NAME	=	rush

CXX		=	clang++
CXXFLAG	=	-Wall -Werror -Wextra -Iincludes
NCURSES	=	-lncurses

SRC		=	$(wildcard src/*.cpp)
OBJ		=	$(patsubst src/%.cpp, obj/%.o, $(SRC))

all		:	$(NAME)

obj		:
			mkdir obj

obj/%.o	: 	src/%.cpp
			$(CXX) $(CXXFLAG) -c -o $@ $<

$(NAME)	: 	obj $(OBJ)
			$(CXX) $(OBJ) -o $(NAME) $(NCURSES)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

