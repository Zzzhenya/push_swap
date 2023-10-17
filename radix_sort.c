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
    int dig;
    int size_b;

    dig = 1;
    max = max_bin_digits(*a);
    size_a = ft_stksize(*a);
    printf("max bin digits: %d\n", max);
    while (dig<max - 1)
    {
        size_a = ft_stksize(*a);
        while (size_a > 0)
        {
            this = *a;
            if ((this->nval & dig) == 1)
            {
                rot('a', a);
               // print_details('a', *a);  
            }
            else
            {
                push('b', a, b);
               // print_details('b', *b);
            }
            size_a --;
        }
        dig ++;
        size_b = ft_stksize(*b);
        while (size_b > 0)
        {
            this = *b;
            if ((this->nval & dig) == 1)
            {
                rot('b', b);
                //print_details('a', *a);
            }
            else
            {
                
                push('a', b, a);
                //print_details('b', *b);
                
            }
            size_b --;
        }
        size_b = ft_stksize(*b);
        while (size_b > 0)
        {
            push('a', b, a);
            size_b --;
        }
    }
}
/*
while (this && size_a > 0)
    {
        if (this->)
    }
*/