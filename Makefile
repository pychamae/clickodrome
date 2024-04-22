NAME =			test

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

LDFLAGS =		-L./ -ldprintf -lvsscanf

all:$(NAME)

$(NAME):$(OBJS)
			$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)
.c.o:
			$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
ar:$(OBJS)
			ar rc $(NAME).a $(OBJS)
g:
			gdb --arg ./$(NAME)
clean:
			rm -f *.c *~ vector/*.o vector/*.c~ include/*.h~
fclean: clean
			rm -f $(NAME)
re: fclean all

tree: fclean
			tree
