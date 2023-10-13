/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:52:34 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/04 18:52:47 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct node
{
	int				content;
	struct node		*next;
}					t_stack;

//debug utils
void    print_stack(t_stack *stack);
void	clear_stack(t_stack **stack);

//stack utils
void    	ft_stkadd_front(t_stack **stack, t_stack *new);
void		ft_stkadd_back(t_stack **stack, t_stack *new);
t_stack    *ft_stknew(int content);
int			ft_stksize(t_stack *stack);


#endif
