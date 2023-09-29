NAME = push_swap

SRCS = 		push_swap.c

OBJS = 		$(SRCS:.c=.o)

all: $(NAME)

$(NAME): libft/libft.a
	cc -Wall -Werror -Wextra $(SRCS) libft.a -o $(NAME)

libft/libft.a:
	$(MAKE) -C ./libft
	cp libft/libft.a libft.a

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)
	rm -f libft.a

re: fclean all

.PHONY: all fclean re clean 