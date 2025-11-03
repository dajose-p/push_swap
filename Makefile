NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = srcs/main.c srcs/parse.c srcs/main_checks.c srcs/lst_ops.c srcs/lst_ops_2.c srcs/ps_ops.c srcs/ps_ops_2.c \
       srcs/tests.c srcs/math_ops.c srcs/sort_more.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C libft/
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	rm -rf $(OBJECTS)
	make clean -C libft
fclean: clean
	rm -rf $(NAME)
	make fclean -C libft
re: fclean all

.PHONY: all clean fclean re
