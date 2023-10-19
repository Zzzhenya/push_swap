#include "push_swap.h"

void ft_radix_sort(t_stack **a, t_stack **b, int max)
{
    int digit;
    int size;
    int j;
    t_stack *current;

    digit = 0;
    //printf("max%d\n", max);

    size = ft_stksize(*a);
    while (digit < max)
    {
        j = 0;
        while (j < size)
        {
            current = *a;
            if (((current->nval >> digit) & 1) == 1)
                rot ('a', a);
            else
                push ('b', a, b);
            j ++;
        }
        digit ++;
        while (ft_stksize(*b) > 0)
            push ('a', b, a);
    }   
}
