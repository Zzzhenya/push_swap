#include "push_swap.h"

void ft_radix_sort(t_stack **a, t_stack **b, int max)
{
    int size_a;
    int size_b;
    t_stack *this;
    int dig;

    dig = 1; 
    while (dig<max )
    {
        int i = 0;
        size_a = ft_stksize(*a);
        while (size_a > 0)
        {
            this = *a;
            if (((this->nval >> i) & 1) == 1)
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
        size_b = ft_stksize(*b);
        while (size_b > 0)
        {
            push('a', b, a);
            size_b --;
        }
        i ++;
        dig ++;
    }
}
/*
while (this && size_a > 0)
    {
        if (this->)
    }
*/