SRC = Harl.cpp main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = harlFilter
FLAGS = -Wall -Wextra -Werror -std=c++98 

CC = c++

all: ${NAME}

${NAME}: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
