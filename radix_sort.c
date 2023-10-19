#include "push_swap.h"

void ft_radix_sort(t_stack **a, t_stack **b, int max)
{
    int size_a;
    t_stack *this;
    int dig;
    int i;

    dig = 0; 
    while (dig<max )
    {
        i = 0;
        size_a = ft_stksize(*a);
        while (size_a > 0)
        {
            this = *a;
            if (((this->nval >> i) & 1) == 1)
            {
                rot('a', a);
            }
            else
            {
                push('b', a, b);
            }
            size_a --;
        }
        while (ft_stksize(*b) > 0)
        {
            push('a', b, a);
        }
        i ++;
        dig ++;
    }
}
