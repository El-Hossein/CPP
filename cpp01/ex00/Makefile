SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Zombie
FLAGS = -Wall -Wextra -Werror -std=c++98 

CC = c++

all: ${NAME}

${NAME}: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
