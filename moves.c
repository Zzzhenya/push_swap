#include "push_swap.h"

t_stack *swap(char c, t_stack *ptr)
{
	t_stack *temp;

	temp = ptr;
	ptr = temp ->next;
	temp->next = ptr->next;
	ptr->next = temp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
	else
		write (1, "Error\n", 6);
	return(ptr);
}
/*
int push(char c, t_stack *ptr)
{

}

int rot(char c, t_stack *ptr)
{

}

int rev_rot(char c, t_stack *ptr)
{

}

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