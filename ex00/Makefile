CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
NAME = megaphone
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

.PHONY: clean  