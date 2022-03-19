/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:18:15 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 18:09:57 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_ab(t_list *stack)
{
	int	aux;

	if (stack != NULL)
	{
		aux = stack->content;
		stack->content = (stack->next)->content;
		(stack->next)->content = aux;
	}
}

void	swap_s(t_list *stack1, t_list *stack2)
{
	swap_ab(stack1);
	swap_ab(stack2);
}
