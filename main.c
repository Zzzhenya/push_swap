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
                a = store_in_stack(a, argv, argc);
                b = malloc(sizeof(t_stack));
                if (!b)
                    return (0);
                push('b', a, b);
                push('b', a, b);
                push('b', a, b);
                printf("a :\n");
                print_stack(*a);
                printf("b :\n");
                print_stack(*b);
                rev_rot_both(a, b);
                printf("a :\n");
                print_stack(*a);
                printf("b :\n");
                print_stack(*b);
                clear_stack(a);
                clear_stack(b);
                free(a);
                free(b);
                a = NULL;
                b = NULL;
            }
        }
        else
        {
            a = store_in_stack(a, argv, argc);
            b = malloc(sizeof(t_stack));
            if (!b)
                return (0);
            //swap('a', a);
            //rot('a', a);
            rev_rot('a', a);
            print_stack(*a);
            clear_stack(a);
            print_stack(*b);
            clear_stack(b);
            free(a);
            free(b);
            a = NULL;
            b = NULL;
        }
    }
    return (0);
}