NAME = push_swap

LIBFT = libft.a

SRCS = 		push_swap.c \
			main.c \
			stack_utils.c \
			moves.c \
			double_moves.c \
			debug_utils.c \
			basic_sort.c \
			normalize.c \
			radix_sort.c

all: $(NAME)

$(NAME): $(LIBFT)
	cc -Wall -Werror -Wextra $(SRCS) $(LIBFT) -o $(NAME)

$(LIBFT):libft/$(LIBFT)
	cp libft/$(LIBFT) $(LIBFT)

libft/$(LIBFT):
	$(MAKE) -C ./libft

clean:
	$(MAKE) clean -C ./libft
	rm -f $(NAME)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(LIBFT)

re: fclean all

.PHONY: all fclean re clean
