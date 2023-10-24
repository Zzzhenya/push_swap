/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:01:29 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/23 15:48:16 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void    binary_num(int i)
{
    int num[23];
    int a;
    a = 0;
    //printf("%d :", i);
    ft_printf(" : ");
    if (i ==0)
    {
        ft_printf("0\n");
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
        ft_printf("%d",num[a]);
        a --;
    }
    ft_printf("\n");
}
*/

void	print_details(char c, t_stack *stack)
{
	ft_printf ("stack%c\n", c);
	print_stack(stack);
	ft_printf ("%c size: %d\n", c, ft_stksize(stack));
}

void	print_stack(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	ft_printf("    nval: data\n");
	while (current != NULL)
	{
		ft_printf("    %d: %d\n", current->nval, current->content);
		current = current->next;
	}
}

int	clear_stack(t_stack **stack)
{
	t_stack	*temp;

	temp = 0;
	while (*stack)
	{
		(*stack)->content = 0;
		(*stack)->nval = 0;
		temp = *stack;
		*stack = temp->next;
		free(temp);
		temp = NULL;
	}
	free (stack);
	stack = NULL;
	return (0);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i ++;
	}
	free(arr);
	arr = NULL;
}
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
