SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = phone_book
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
	
