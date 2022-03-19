/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:56:56 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 23:18:45 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fonction_return(int pos, int i, int *drp, int *val)
{
	if (pos <= (i / 2))
	{
		*drp = 1;
		*val = pos;
	}
	else
	{
		*drp = 0;
		*val = i - pos;
	}
}

int	pos_of_minelem(t_list **stack, int *drp)
{
	t_list	*tmp;
	int		min;
	int		i;
	int		pos;

	tmp = *stack;
	i = 0;
	pos = 0;
	min = tmp->content;
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
	fonction_return(pos, i, drp, &min);
	return (min);
}

void	min_at_top(t_list **stacka)
{
	int	drp;
	int	pos;
	int	i;

	pos = pos_of_minelem(stacka, &drp);
	if (drp == 1)
	{
		i = 0;
		while (i < pos)
		{
			rotate(stacka, 'a');
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < pos)
		{
			reverse_rotate(stacka, 'a');
			i++;
		}
	}
}

void	sort_five(t_list **stacka, t_list **stackb)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		min_at_top(stacka);
		push_ab(stackb, stacka, 'b');
		i++;
	}
	sort_three(stacka);
	push_ab(stacka, stackb, 'a');
	push_ab(stacka, stackb, 'a');
}
