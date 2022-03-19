/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_toa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:43:21 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/17 19:53:29 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_to_push(t_list **stack_a, t_list **stack_b)
{
	t_var	var;
	t_list	*tmp;

	var.i = 0;
	var.min = min_of_moves(stack_a, stack_b);
	tmp = *stack_b;
	while (tmp->moves != var.min)
	{
		var.i++;
		tmp = tmp->next;
	}
	if (tmp->pos == 0)
		var.i = ft_lstsize(*stack_b) - var.i;
	var.pos = get_moves_of_a(tmp->content, stack_a, &var.drp);
	var.ppt = var.pos;
	if (var.i < var.pos)
		var.ppt = var.i;
	if (tmp->pos == 1 && var.drp == 1)
		equale_one(&var, stack_a, stack_b);
	else if (tmp->pos == 0 && var.drp == 0)
		equale_zero(&var, stack_a, stack_b);
	else if (tmp->pos == 1 && var.drp == 0)
		zero_different(&var, stack_a, stack_b);
	else if (tmp->pos == 0 && var.drp == 1)
		one_different(&var, stack_a, stack_b);
}

void	push_toa(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b != NULL)
	{
		rotate_to_push(stack_a, stack_b);
		push_ab(stack_a, stack_b, 'a');
	}
}
