NAME= ex00
CC= c++
RM= rm -rf
CPPFLAGS= -Werror -Wextra -Wall -std=c++98
SRC= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
