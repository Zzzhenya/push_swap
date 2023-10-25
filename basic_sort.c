/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:56:35 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/23 13:24:54 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_23(t_stack **a, int x, int c)
{
	t_stack	*current;

	current = *a;
	if (x == 2)
	{
		if (current->nval > (current->next)->nval)
			rot(c, a);
	}
	else
	{
		if (current->nval < (current->next)->nval)
			rev_rot(c, a);
		else if (current->nval == 3)
			rot(c, a);
		current = *a;
		if (current->nval > (current->next)->nval)
			swap(c, a);
	}
}

static void	ft_sort_4(t_stack **a, t_stack **b)
{
	t_stack	*current;

	current = *a;
	while (current->nval < 4)
	{
		rot ('a', a);
		current = *a;
	}
	if (current->nval == 4)
	{
		push ('b', a, b);
		if (!ft_issorted(*a))
			ft_sort_23(a, 3, 'a');
		push ('a', b, a);
		rot ('a', a);
	}
}

static void	ft_sort_5(t_stack **a, t_stack **b, int x)
{
	int		check;

	check = 0;
	while (x > 0)
	{
		if ((*a)->nval == 4 || (*a)->nval == 5)
		{
			push ('b', a, b);
			check ++;
			if (check == 2)
				break ;
		}
		else
			rot ('a', a);
		x --;
	}
	if (!ft_issorted(*a))
		ft_sort_23(a, 3, 'a');
	if (!ft_issorted(*b))
		ft_sort_23(b, 2, 'b');
	push ('a', b, a);
	rot ('a', a);
	push ('a', b, a);
	rot ('a', a);
}

void	basic_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_stksize(*a);
	if (*a)
	{
		if (size == 1)
			exit (0);
		else if (size == 2)
			ft_sort_23(a, 2, 'a');
		else if (size == 3)
			ft_sort_23(a, 3, 'a');
		else if (size == 4)
			ft_sort_4(a, b);
		else
			ft_sort_5(a, b, 5);
	}
}
