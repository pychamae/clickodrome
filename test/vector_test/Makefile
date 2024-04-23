NAME =			test_vector

SRC =			main.c				\
			../../vector/clear.c		\
			../../vector/delete.c		\
			../../vector/new.c		\
			../../vector/pop.c		\
			../../vector/push.c		\
			../../vector/pop_index.c	\
			../../vector/view.c		\
			../../vector/memcpy.c		\

OBJS =			$(SRC:.c=.o)

INCLUDE =		-I./../../include

CC =			gcc

FLAGS =			-Wall -Wextra -g

LDFLAGS =		-L./

all:$(NAME)

$(NAME):$(OBJS)
			$(CC) $(OBJS) -O0 --coverage $(LDFLAGS) -o $(NAME)
.c.o:
			$(CC) $(FLAGS) -O0 --coverage $(INCLUDE) -c $< -o $@
ar:$(OBJS)
			ar rc $(NAME).a $(OBJS)
g:
			gdb --arg ./$(NAME)
clean:
			rm -f $(OBJS)
fclean: clean
			rm -f $(NAME)
re: fclean all

report: fclean all
			./$(NAME)
			gcov $(SRC)
			rm -f *.gcov

tree: fclean
			tree
