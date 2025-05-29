SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: ${NAME}

${NAME}: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp 
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
