/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compt_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:42:32 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 23:37:51 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remplir(int *min, int *pos, int *val, int *i)
{
	*min = *val;
	*pos = *i;
}

int	get_moves_of_a(int val, t_list **stack, int *drp)
{
	int		i;
	int		pos;
	int		min;
	t_list	*tmp;

	tmp = *stack;
	i = 0;
	pos = -1;
	while (1)
	{
		if (tmp->content > val && pos == -1)
			remplir(&min, &pos, &(tmp->content), &i);
		if (tmp->content > val && tmp->content < min)
			remplir(&min, &pos, &(tmp->content), &i);
		tmp = tmp->next;
		i++;
		if (tmp == *stack)
			break ;
	}
	fonction_return(pos, i, drp, &min);
	return (min);
}

void	stock_moves_of_b(t_list **stack)
{
	int		size;
	t_list	*tmp;
	int		i;

	size = ft_lstsize(*stack);
	tmp = *stack;
	i = 0;
	while (i <= (size / 2))
	{
		tmp->moves = i;
		tmp->pos = 1;
		tmp = tmp->next;
		i++;
	}
	while (i < size)
	{
		tmp->moves = size - i;
		tmp->pos = 0;
		tmp = tmp->next;
		i++;
	}
}

void	moves_total(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		nbr_move;
	int		drp;

	stock_moves_of_b(stack_b);
	tmp = *stack_b;
	while (1)
	{
		nbr_move = get_moves_of_a(tmp->content, stack_a, &drp);
		if (drp == tmp->pos && nbr_move > tmp->moves)
			tmp->moves = nbr_move;
		else if (drp != tmp->pos)
			tmp->moves = tmp->moves + nbr_move;
		tmp = tmp->next;
		if (tmp == *stack_b)
			break ;
	}
}
