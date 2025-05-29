SRC = HumanA.cpp  HumanB.cpp  Weapon.cpp  main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Humans
FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: ${NAME}

${NAME}: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp Weapon.hpp HumanB.hpp HumanA.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	
