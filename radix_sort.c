/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:23:22 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/23 13:50:12 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_stack **a, t_stack **b, int max)
{
	int		digit;
	int		size;
	int		j;
	t_stack	*current;

	digit = 0;
	size = ft_stksize(*a);
	while (digit < max)
	{
		j = 0;
		while (j < size)
		{
			current = *a;
			if (((current->nval >> digit) & 1) == 1)
				rot ('a', a);
			else
				push ('b', a, b);
			j ++;
		}
		digit ++;
		while (ft_stksize(*b) > 0)
			push ('a', b, a);
	}
}
/*
print_details('a',*a);
print_details('b',*b);
*/
