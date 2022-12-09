NAME = filestream
SRC = main.cpp
SRCDIR = srcs/
INCDIR = includes/
TESTDIR = test/
TEST = file.replace emptyfile.replace lilfile.replace
REPLACEFILE = $(addprefix $(TESTDIR), $(TEST))
OBJDIR = bin/
CC = c++ -I$(INCDIR)
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))
RM = rm -f

$(OBJDIR)%.o:	$(SRCDIR)%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJDIR) $(OBJ)
		$(CC) $(OBJ) -o $(NAME)
 
all:		$(NAME)

$(OBJDIR):
		@mkdir -p $(OBJDIR)

clean:	
		$(RM) -rf $(OBJDIR)
		$(RM) $(REPLACEFILE)

fclean:			clean
		$(RM) $(NAME)

test:
		./$(NAME) $(TESTDIR)emptyfile "lil" "lol"
		./$(NAME) $(TESTDIR)file "lil" "lol"
		./$(NAME) $(TESTDIR)lilfile "lil" "lol"

re:			fclean all

.PHONY:		all clean fclean re test
