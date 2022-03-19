/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_toa_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:48:56 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/17 19:50:10 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_of_moves(t_list **stack_a, t_list **stack_b)
{
	int		min;
	t_list	*tmp;

	moves_total(stack_a, stack_b);
	tmp = *stack_b;
	min = tmp->moves;
	while (1)
	{
		if (tmp->moves < min)
			min = tmp->moves;
		tmp = tmp->next;
		if (tmp == *stack_b)
			break ;
	}
	return (min);
}

void	equale_one(t_var *var, t_list **stack_a, t_list **stack_b)
{
	int	z;
	int	j;

	z = 0;
	j = 0;
	while (j < var->min)
	{
		while (z < var->ppt)
		{
			rotate_prime(stack_a, stack_b);
			z++;
			j++;
		}
		if (j == var->min)
			break ;
		if (var->ppt == var->pos)
			rotate(stack_b, 'b');
		else if (var->ppt == var->i)
			rotate(stack_a, 'a');
		j++;
	}
}

void	equale_zero(t_var *var, t_list **stack_a, t_list **stack_b)
{
	int	j;
	int	z;

	j = 0;
	z = 0;
	while (j < var->min)
	{
		while (z < var->ppt)
		{
			rev_rotprime(stack_a, stack_b);
			z++;
			j++;
		}
		if (j == var->min)
			break ;
		if (var->ppt == var->pos)
			reverse_rotate(stack_b, 'b');
		else if (var->ppt == var->i)
			reverse_rotate(stack_a, 'a');
		j++;
	}
}

void	zero_different(t_var *var, t_list **stack_a, t_list **stack_b)
{
	int	j;

	j = 0;
	while (j < var->i)
	{
		rotate(stack_b, 'b');
		j++;
	}
	j = 0;
	while (j < var->pos)
	{
		reverse_rotate(stack_a, 'a');
		j++;
	}
}

void	one_different(t_var *var, t_list **stack_a, t_list **stack_b)
{
	int	j;

	j = 0;
	while (j < var->i)
	{
		reverse_rotate(stack_b, 'b');
		j++;
	}
	j = 0;
	while (j < var->pos)
	{
		rotate(stack_a, 'a');
		j++;
	}
}
