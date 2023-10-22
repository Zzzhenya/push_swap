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

int nums_as_args(char **argv)
{
    t_stack    **a;
    t_stack    **b;
    int         max;

    a = NULL;
    if (ft_parse(argv, 1) < 0)
    {
        write (1, "Error\n", 6);
        return (0);
    }
    else
    {
        a = store_in_stack(a, argv, 1);
        if (ft_issorted(*a))
        {
            clear_stack(a);
            return (0);
        }
        b = malloc(sizeof(t_stack));
        if (!b)
        {
            clear_stack(a);
            return (0);
        }
        normalize(a);
        max = max_bin_digits(*a);
        ft_radix_sort(a, b, max);
        clear_stack(a);
        clear_stack(b);
    }
    return (1);
}

int nums_as_str(char *str)
{
    char       **arr;
    t_stack    **a;
    t_stack    **b;
    int         max;

    a = NULL;
    arr = NULL;
    arr = ft_split(str, ' ');
    if (!arr)
        return (0);
    if (ft_parse(arr, 0) < 0)
    {
            // need to free the whole thing one by one
            //free(arr);
        write (1, "Error\n", 6);
        return (0);
    }
    else
    {
        a = store_in_stack(a, arr, 0);
        if (ft_issorted(*a))
        {
            clear_stack(a);
            return (0);
        }
        b = malloc(sizeof(t_stack));
        if (!b)
            return (0);
        normalize(a);
        max = max_bin_digits(*a);
        ft_radix_sort(a, b, max);
        clear_stack(a);
        clear_stack(b);
        return (1);
    }
}

/*Main for Push Swap*/
int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    else if (argc == 2)
    {
        if (nums_as_str(argv[1]))
            return(0);
        else
            return (-1);
    }
    else
    {
        if (nums_as_args(argv))
            return (0);
        else
            return (-1);
    }
    return (0);
}
