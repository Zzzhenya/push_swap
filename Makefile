NAME = push_swap

LIBFT = libft.a

CFLAGS = -Wall -Werror -Wextra

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
	@cc $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)
	@echo "...push_swap compiled."

$(LIBFT):libft/$(LIBFT)
	@cp libft/$(LIBFT) $(LIBFT)
	@echo "...libft.a copied to current directory."

libft/$(LIBFT):
	@$(MAKE) -C ./libft

clean:
	@$(MAKE) clean -C ./libft
	@rm -f $(NAME)
	@echo "...push_swap program cleaned."

fclean: clean
	@$(MAKE) fclean -C ./libft
	@rm -f $(LIBFT)
	@echo "...libft.a cleaned."

re: fclean all

.PHONY: all fclean re clean
