/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:02:27 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/23 13:30:22 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_stack **a, t_stack **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		swap('x', a);
		swap('x', b);
		write (1, "ss\n", 3);
	}
}

void	rot_both(t_stack **a, t_stack **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		rot('x', a);
		rot('x', b);
		write (1, "rr\n", 3);
	}
}

void	rev_rot_both(t_stack **a, t_stack **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		rev_rot('x', a);
		rev_rot('x', b);
		write (1, "rrr\n", 4);
	}
}
