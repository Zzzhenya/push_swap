#include "push_swap.h"


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
    free(a);
    a = NULL;
    return (0);
}