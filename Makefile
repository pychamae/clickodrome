NAME =			clickodrome

SRC =			vector/main.c			\
			vector/clear.c			\
			vector/delete.c			\
			vector/new.c			\
			vector/pop_back.c		\
			vector/push.c			\
			vector/realloc.c		\
			vector/view.c			\
			vector/memcpy.c			\
			vector/new_view.c		\
			vector/init_new_vector.c	\
			vector/get_data.c		\

OBJS =			$(SRC:.c=.o)

INCLUDE =		-I./include

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
			rm -f $(shell find ./ -name "*.o")
			rm -f $(shell find ./ -name "*~")
			rm -f $(shell find ./ -name "*.gcda")
			rm -f $(shell find ./ -name "*.gcno")
fclean: clean
			rm -f $(NAME)
re: fclean all

test: fclean
			cd test/vector_test/ ; make report

tree: fclean
			tree
