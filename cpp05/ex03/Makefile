CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
NAME = a.out
SRC = $(wildcard *.cpp)

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
