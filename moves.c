#include "push_swap.h"

void swap(char c, t_stack **ptr)
{
	t_stack *temp;

	if ((*ptr)->next)
	{
		temp = *ptr;
		*ptr = temp ->next;
		temp->next = (*ptr)->next;
		(*ptr)->next = temp;
		if (c == 'a')
			write(1, "sa\n", 3);
		else if (c == 'b')
			write(1, "sb\n", 3);
		else
			write (1, "Error\n", 6);
	}
}

void rot(char c, t_stack **ptr)
{
	t_stack *temp;

	if ((*ptr)->next)
	{
		temp = *ptr;
		*ptr = temp->next;
		temp->next = NULL;
		ft_stkadd_back(ptr, temp);
		if (c == 'a')
			write(1, "ra\n", 3);
		else if (c == 'b')
			write(1, "rb\n", 3);
		else
			write (1, "Error\n", 6);
	}
}

void rev_rot(char c, t_stack **ptr)
{
	t_stack *b4last;
	t_stack *temp;

	if ((*ptr)->next)
	{
		b4last = *ptr;
		while (b4last->next && (b4last->next)->next)
			b4last = b4last->next;
		temp = b4last->next;
		b4last->next = NULL;
		ft_stkadd_front(ptr, temp);
		if (c == 'a')
			write(1, "rra\n", 4);
		else if (c == 'b')
			write(1, "rrb\n", 4);
		else
			write (1, "Error\n", 6);
	}
}

/* Push from x to y*/
void	push(char c, t_stack **x, t_stack **y)
{
	t_stack	*temp;

	if (*x)
	{
		temp = *x;
		*x = (*x)->next;
		temp->next = NULL;
		ft_stkadd_front(y, temp);
		if (c == 'a')
			write(1, "pa\n", 3);
		else if (c == 'b')
			write(1, "pb\n", 3);
		else
			write (1, "Error\n", 6);
	}

}
/*
int swap_both(t_stack *a, t_stack *b)
{

}

int rot_both(t_stack *a, t_stack *b)
{

}

int rev_rot_both(t_stack *a, t_stack *b)
{

}
*/