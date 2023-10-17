#include "push_swap.h"

/* max nval*/
int get_max(t_stack *stack)
{
    int max;
    t_stack *current;

    if (!stack)
        return (0);
    current = stack;
    max = current->nval;
    while (current)
    {
        if (current->nval > max)
            max = current->nval;
        current=current->next;
    }
    return (max);
}

void ft_radix_sort(t_stack **a, t_stack **b)
{
    int size_a;
    t_stack *this;
    //int max;

    size_a = ft_stksize(*a);
    this = *a;
    //max = get_max(*a);
    while (size_a > 0)
    {
        if (((this->nval >> 1)& 1) == 1)
            rot('a', a);
        else
            push('b', a, b);
        this = *a;
        size_a --;
    }
}
/*
while (this && size_a > 0)
    {
        if (this->)
    }
*/