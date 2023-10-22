#include "push_swap.h"

/* max nval binary digits*/
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

int ft_pushswap(t_stack **a, t_stack **b)
{
    int         max;

    normalize(a);
    max = max_bin_digits(*a);
    ft_radix_sort(a, b, max);
    clear_stack(a);
    clear_stack(b);
    return (1);
}

int ft_init(char **argv, int x)
{
    t_stack    **a;
    t_stack    **b;

    a = NULL;
    if (ft_parse(argv, x) < 0)
    {
        write (1, "Error\n", 6);
        return (0);
    }
    a = store_in_stack(a, argv, x);
    if (ft_issorted(*a))
    {
        clear_stack(a);
        return (0);
    }
    b = malloc(sizeof(t_stack ));
    if (!b)
    {
        clear_stack(a);
        return (0);
    }
    if (!ft_pushswap(a, b))
        return (0);
    return (1);
}

/*Main for Push Swap*/
int main(int argc, char **argv)
{
    char **arr;

    arr = NULL;
    if (argc < 2)
        return (0);
    else if (argc == 2)
    {
        arr = ft_split(argv[1], ' ');
        if (!arr || arr[0] == (void *)0)
            return (0);
        if (ft_init(arr, 0))
            return(0);
        else
            return (-1);
    }
    else
    {
        if (ft_init(argv, 1))
            return (0);
        else
            return (-1);
    }
    return (0);
}
