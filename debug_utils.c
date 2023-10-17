#include "push_swap.h"

void    binary_num(int i)
{
    int num[23];
    int a;
    a = 0;
    //printf("%d :", i);
    printf(" : ");
    if (i ==0)
    {
        printf("0\n");
        exit(0);
    }
    while (i > 0)
    {
        //num[a] = i & 1;//i%2;
        //i = i >> 1;//i = i/2;
        num[a] = (i & 1);
        i = i >> 1;
        a ++;
    }
    a --;
    while (a >= 0)
    {
        printf("%d",num[a]);
        a --;
    }
    printf("\n");
}


void    print_details(char c, t_stack *stack)
{
    printf("stack%c\n", c);
    print_stack(stack);
    printf("%c size: %d\n",c, ft_stksize(stack));
 //   printf("%c max: %d\n",c, get_max(stack));
}


void    print_stack(t_stack *stack)
{
    t_stack *current;
 
    current = stack;
    printf("    nval: data\n");
    while (current != NULL)
    {
        printf("    %d: %d", current->nval, current->content);
        binary_num(current->nval);
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