NAME = Bureaucrat
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS =	./srcs/Bureaucrat.cpp \
		./srcs/Form.cpp \
		main.cpp

OBJ = $(SRCS:.cpp=.o)

.phony: $(NAME) all clean fclean re

all: $(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all