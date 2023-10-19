#include "push_swap.h"

void ft_radix_sort(t_stack **a, t_stack **b, int max)
{
    int size_a;
    t_stack *this;
    int dig;
    int i;

    dig = 1; 
    //while (dig<max )
    printf("max: %d\n", max);   
    while (dig <= max)
    {
        i = 0;
        size_a = ft_stksize(*a);
        while (size_a > 0)
        {
            this = *a;
            if (((this->nval >> i) & 1) == 0)
            {   
                push('b', a, b);
            }
            else
            {
                rot('a', a);
            }
            size_a --;
        }
        print_details('b',*b);
        while (ft_stksize(*b) > 0)
        {
            push('a', b, a);
        }
        i ++;
        dig ++;
        print_details('a',*a);
    }
}
