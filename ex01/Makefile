CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++9
SRC = Contact.cpp Phonebook.cpp
NAME = crappy
OBJ =$(SRC:.cpp=.o)
RM = rm -rf

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re