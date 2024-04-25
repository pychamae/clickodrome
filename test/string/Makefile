NAME =			string

SRC =			main.c				\
			../../string/append_str.c	\
			../../string/append_string.c	\
			../../string/clear.c		\
			../../string/compare.c		\
			../../string/compare_str.c	\
			../../string/delete.c		\
			../../string/erase.c		\
			../../string/get_char.c		\
			../../string/get_content.c	\
			../../string/get_len.c		\
			../../string/new.c		\
			../../string/new_str.c		\
			../../string/new_string.c	\
			../../string/pop_back.c		\
			../../string/push_back.c	\
			../../string/shrink_to_fit.c	\

OBJS =			$(SRC:.c=.o)

INCLUDE =		-I./../../include

CC =			bcc

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
