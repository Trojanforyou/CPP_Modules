NAME = scavtrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror 

SRCS = main.cpp \
       ClapTrap.cpp \
       ScavTrap.cpp \
	   FlagTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FlagTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
