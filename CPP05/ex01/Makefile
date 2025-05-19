
NAME = Bureaucrat
SOURCES = main.cpp Bureaucrat.cpp

OFILES = $(SOURCES:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -I. -o $@

clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all, clean, fclean, re
