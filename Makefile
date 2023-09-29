NAME = push_swap

SRCS = 		push_swap.c

OBJS = 		$(SRCS:.c=.o)

all: $(NAME)

$(NAME): Libft/libft.a
	cc -Wall -Werror -Wextra $(SRCS) libft.a -o $(NAME)

Libft/libft.a:
	$(MAKE) -C ./libft
	mv Libft/libft.a libft.a

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)
	rm -f libft.a

re: fclean all

.PHONY: all fclean re clean 