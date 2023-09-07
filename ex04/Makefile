NAME= ex04
CPP= c++
RM= rm -rf
CPPFLAGS= -Werror -Wextra -Wall -std=c++98
SRC= main.cpp replace.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
