#include "push_swap.h"

/* max nval*/
int max_bin_digits(t_stack *stack)
{
    int max;
    int n;
    t_stack *current;

    n = 0;
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
    while (max > 0)
    {
        max = max >> 1;
        n ++;
    }
    return (n);
}

void ft_radix_sort(t_stack **a, t_stack **b)
{
    int size_a;
    t_stack *this;
    int max;
    //int dig;

    //dig = 1;
    max = max_bin_digits(*a);
    size_a = ft_stksize(*a);
    printf("max bin digits: %d\n", max);
    while (size_a > 0)
    {
        this = *a;
        if ((this->nval & 1) == 1)
        {
            rot('a', a);
            print_details('a', *a);  
        }
        else
        {
            push('b', a, b);
            print_details('b', *b);
        }
        size_a --;
    }
}
/*
while (this && size_a > 0)
    {
        if (this->)
    }
*/