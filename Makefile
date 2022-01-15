# Makefile

CC = g++

RM = rm -f

CFLAGS +=
CFLAGS +=

LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

NAME = original_sim

SRCS = src/main.cpp \
	src/Map/Map.cpp \
	src/Map/Tile.cpp

OBJS = $(SRCS: .cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re