NAME = megaphone
SRC = megaphone.cpp
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)
RM = rm -f

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)
 
all:		$(NAME)

clean:	
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
