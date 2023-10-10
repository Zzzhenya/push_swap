#include "push_swap.h"
/*
int swap(char c, t_stack *ptr)
{

}

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

void    print_stack(t_stack **stack)
{
    t_stack *temp;

    temp = *stack;
    while (temp != NULL)
    {
        ft_putnbr_fd(temp->content, 1);
        temp = temp->next;
    }

}

void    ft_stkadd_front(t_stack **lst, t_stack *new)
{
    new->next = *lst;
    *lst = new;
}

t_stack    *ft_stknew(int content)
{
    t_stack    *new_node;

    new_node = malloc(sizeof(t_stack));
    if (!new_node)
        return (0);
    new_node->content = content;
    new_node->next = 0;
    return (new_node);
}

void clear_stack(t_stack **stack)
{
    t_stack *temp;

    temp = 0;
    while (*stack != NULL)
    {
        temp = (*stack)->next;
        (*stack)->content = 0;
        free(*stack);
        *stack = temp;
    }
}

int main(void)
{
    t_stack **a;
    int     i;

    i = 1;
    a = malloc(sizeof(t_stack **));
    if (!a)
        return (-1);
    
    while (i < 11)
    {
        ft_stkadd_front(a, ft_stknew(i));
        i ++;
    } 
    print_stack(a);
    clear_stack(a);
    free(a);
    return (0);
}