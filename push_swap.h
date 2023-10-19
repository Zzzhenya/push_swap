/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:52:34 by sde-silv          #+#    #+#             */
/*   Updated: 2023/10/16 15:36:40 by sde-silv         ###   ########.fr       */
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
	int				nval;
	struct node		*next;
}					t_stack;

//debug utils
void    print_stack(t_stack *stack);
void	clear_stack(t_stack **stack);
void    print_details(char c, t_stack *stack);

//stack utils
void    	ft_stkadd_front(t_stack **stack, t_stack *new);
void		ft_stkadd_back(t_stack **stack, t_stack *new);
t_stack    *ft_stknew(int content);
int			ft_stksize(t_stack *stack);

//push_swap
int parse_for_dup(char **argv);
int	parse_for_type(char *str);
int	ft_parse(char **argv);
t_stack **store_in_stack(t_stack **a, char **argv);

//moves
void	swap(char c, t_stack **ptr);
void	rot(char c, t_stack **ptr);
void	rev_rot(char c, t_stack **ptr);
void	push(char c, t_stack **x, t_stack **y);

//double moves
void	swap_both(t_stack **a, t_stack **b);
void	rot_both(t_stack **a, t_stack **b);
void	rev_rot_both(t_stack **a, t_stack **b);

//main
int get_max(t_stack *stack);

//sort_utils
void	ft_sort(t_stack **a, t_stack **b);

//normalize
void normalize(t_stack **stack);

//radix sort
void ft_radix_sort(t_stack **a, t_stack **b, int max);

#endif
