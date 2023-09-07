NAME= ex03
CPP= c++
RM= rm -rf
CPPFLAGS= -Werror -Wextra -Wall -std=c++98 -fsanitize=address
SRC= main.cpp HumanB.cpp HumanA.cpp Weapon.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
