/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:56:12 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/23 13:24:39 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stkadd_front(t_stack **stack, t_stack *new)
{
	if (*stack)
		new->next = *stack;
	*stack = new;
}

t_stack	*ft_stknew(int content)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->content = content;
	new_node->nval = 0;
	new_node->next = 0;
	return (new_node);
}

void	ft_stkadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*temp;

	if (*stack == 0)
		*stack = new;
	else
	{
		temp = *stack;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}
}

int	ft_stksize(t_stack *stack)
{
	int		size;
	t_stack	*current;

	size = 0;
	current = stack;
	while (current != NULL)
	{
		size ++;
		current = current->next;
	}
	return (size);
}
