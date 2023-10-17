#include "push_swap.h"

void    print_details(t_stack *stack)
{
    print_stack(stack);
    printf("size: %d\n", ft_stksize(stack));
    printf("max: %d\n", get_max(stack));
}


void    print_stack(t_stack *stack)
{
    t_stack *current;
 
    current = stack;
    while (current != NULL)
    {
        printf("%d\n", current->content);
        current = current->next;
    }
}

void clear_stack(t_stack **stack)
{
    t_stack *temp;

    temp = 0;
    while (*stack)
    {
        (*stack)->content = 0;
        temp = *stack;
        *stack = temp->next;
        free(temp);
        temp = NULL;
    }
    free (stack);
    stack = NULL;
}