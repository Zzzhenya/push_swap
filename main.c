#include "push_swap.h"


/* Main for debug_utils and stack_utils testing
int main(void)
{
    t_stack **a;
    int     i;
    int     arr[4] = {1, 2, 3, 4};

    i = 0;
    a = malloc(sizeof(t_stack **));
    if (!a)
        return (0);
    *a = ft_stknew(arr[i]);
    i ++;
    while (i < 4)
    {
        ft_stkadd_front(a, ft_stknew(arr[i]));
        i ++;
    } 
    print_stack(*a);

    clear_stack(a);
    free(a);
    a = NULL;
    return (0);
}
*/

//Main for Push Swap
int main(int argc, char **argv)
{
    t_stack    **a;
    t_stack    **b;
    //int size;
    //int max;

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
                //size = ft_stksize(*a);
                //max = get_max(*a);
                //check whether already ordered; if so exit.
                b = malloc(sizeof(t_stack));
                if (!b)
                    return (0);
                //ft_sort(a, b);
                normalize(a);
                print_details('a',*a);
                ft_radix_sort(a, b);
                print_details('a',*a);
                print_details('b',*b);
                clear_stack(a);
                clear_stack(b);
            }
        }
        else
        {
            a = store_in_stack(a, argv);
            b = malloc(sizeof(t_stack));
            if (!b)
                return (0);
            clear_stack(a);
            //print_stack(*b);
            clear_stack(b);
        }
    }
    return (0);
}
