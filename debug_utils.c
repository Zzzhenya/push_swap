#include "push_swap.h"

void    print_details(char c, t_stack *stack)
{
    printf("stack%c\n", c);
    print_stack(stack);
    printf("%c size: %d\n",c, ft_stksize(stack));
    printf("%c max: %d\n",c, get_max(stack));
}


void    print_stack(t_stack *stack)
{
    t_stack *current;
 
    current = stack;
    printf("    nval: data\n");
    while (current != NULL)
    {
        printf("    %d: %d\n", current->nval,current->content);
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