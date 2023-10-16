NAME = push_swap

SRCS = 		push_swap.c \
			main.c \
			stack_utils.c \
			moves.c \
			double_moves.c \
			debug_utils.c \

all: $(NAME)

$(NAME): Libft/libft.a
	cc -Wall -Werror -Wextra $(SRCS) libft.a -o $(NAME)

Libft/libft.a:
	$(MAKE) -C ./libft
	cp libft/libft.a libft.a

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f libft.a
	rm -f $(NAME)

re: fclean all

tests:
	make re
	cc tester.c libftprintf.a
	valgrind --leak-check=yes ./a.out
	make fclean
	rm a.out

.PHONY: all fclean re clean tests
