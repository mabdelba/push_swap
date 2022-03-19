/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:56:45 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 23:47:51 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish(t_list **stack, int pos, int i)
{
	int	j;

	if (pos <= (i / 2))
	{
		j = 0;
		while (j < pos)
		{
			rotate(stack, 'a');
			j++;
		}
	}
	else
	{
		while (i > pos)
		{
			reverse_rotate(stack, 'a');
			i--;
		}
	}	
}

void	final_sort(t_list **stack)
{
	t_list	*tmp;
	int		pos;
	int		i;
	int		min;

	tmp = *stack;
	i = 0;
	min = tmp->content;
	if (is_sorted(stack) == 0)
		return ;
	while (1)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			pos = i;
		}
		tmp = tmp->next;
		i++;
		if (tmp == *stack)
			break ;
	}
	finish(stack, pos, i);
}
