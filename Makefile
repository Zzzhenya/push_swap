NAME = push_swap

LIBFT = libft.a

SRCS = 		push_swap.c \
			main.c \
			stack_utils.c \
			moves.c \
			double_moves.c \
			debug_utils.c \
			sort_utils.c \
			normalize.c \
			radix_sort.c

all: $(NAME)

$(NAME): $(LIBFT)
	cc -Wall -Werror -Wextra $(SRCS) $(LIBFT) -o $(NAME)

$(LIBFT):Libft/libft.a
	cp libft/libft.a $(LIBFT)

Libft/libft.a:
	$(MAKE) -C ./libft

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)
	rm -f $(LIBFT)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean tests
