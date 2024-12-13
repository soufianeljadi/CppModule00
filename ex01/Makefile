CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp Phonebook.cpp Utils.cpp main.cpp
NAME = my_phonebook
OBJ =$(SRC:.cpp=.o)
RM = rm -rf

all	: $(NAME)

$(NAME)	: $(OBJ) Phonebook.hpp Contact.hpp Utils.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: clean