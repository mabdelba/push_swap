/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:18:15 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 16:47:45 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ab(t_list *stack, char c)
{
	int	aux;

	if (stack != NULL)
	{
		aux = stack->content;
		stack->content = (stack->next)->content;
		(stack->next)->content = aux;
		if (c == 'a')
			ft_putstr("sa\n");
		if (c == 'b')
			ft_putstr("sb\n");
	}
}

void	swap_s(t_list *stack1, t_list *stack2)
{
	swap_ab(stack1, 's');
	swap_ab(stack2, 's');
	ft_putstr("ss\n");
}
