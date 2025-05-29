SRC = Fixed.cpp main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Fixed
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

CC = c++

all: ${NAME}

${NAME}: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp Fixed.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	
