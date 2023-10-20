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

/*Main for Push Swap*/
int main(int argc, char **argv)
{
    t_stack    **a;
    t_stack    **b;
    int         max;

    a = NULL;
    if (argc < 2)
        return (0);
        //write (1, "Error\n", 6);
    /*
    else if (argc == 2)
    {       // check for empty string
        
        if (ft_parse(ft_split(argv[1], ' ')) < 0)
            write (1, "Error\n", 6);
        else
        {
            printf("Yet to implement\n");
        }
        printf("Yet to implement\n");
    }
    */
    else
    {
        if (argc > 2 )
        {
            if (ft_parse(argv) < 0)
                write (1, "Error\n", 6);
            else
            {
                a = store_in_stack(a, argv);
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
            }
        }
    }
    return (0);
}
