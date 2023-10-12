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

void    ft_stkadd_front(t_stack **lst, t_stack *new)
{
    if(*lst)
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
    while (*stack)
    {
        (*stack)->content = 0;
        temp = *stack;
        *stack = temp->next;
        temp = NULL;
        free(temp);
    }
}

void    print_stack(t_stack *stack)
{
    t_stack *current;
 
    current = stack;
    while (current != NULL)
    {
        printf("%d\n", current->content);
        current = current->next;
    }
}

int main(void)
{
    t_stack **a;
    int     i;

    i = 1;
    a = malloc(sizeof(t_stack **));
    if (!a)
        return (0);
    *a = ft_stknew(i);
    i ++;
    while (i < 4)
    {
        ft_stkadd_front(a, ft_stknew(i));
        i ++;
    } 
    print_stack(*a);
    clear_stack(a);
    a = NULL;
    free(a);
    return (0);
}