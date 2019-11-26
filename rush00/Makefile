NAME	=	retro

CXX		=	clang++
CXXFLAG	=	-Wall -Werror -Wextra -Iincludes -std=c++98 -O2
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

install:
	cp $(NAME) /usr/local/bin

clean	:
			rm -rf $(OBJ)
			rm -rf obj

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

