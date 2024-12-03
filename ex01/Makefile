CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Contact.cpp Phonebook.cpp Utils.cpp main.cpp
NAME = crappy
OBJ =$(SRC:.cpp=.o)
RM = rm -rf

all	: $(NAME)

$(NAME)	: $(OBJ) 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.c Phonebook.hpp Contact.hpp Utils.hpp
	@$(CC) $(CPPFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: clean