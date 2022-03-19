/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:54:00 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 16:24:29 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	existe_on(int val, int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (val == tab[i])
			return (0);
		i++;
	}
	return (1);
}

void	push_to_b(t_list **stacka, t_list **stackb, int size)
{
	int	*tab;
	int	prec;
	int	j;
	int	val;

	tab = long_list(*stacka, size, &prec);
	if (size == prec + 1)
		return ;
	j = 0;
	while (j < size)
	{
		val = (*stacka)->content;
		if (existe_on(val, tab, prec + 1))
			push_ab(stackb, stacka, 'b');
		else
			rotate(stacka, 'a');
		j++;
	}
	free(tab);
}
