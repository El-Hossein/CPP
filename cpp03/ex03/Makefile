SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Trap
FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: ${NAME}

${NAME}: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp  ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	
