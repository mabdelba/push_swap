/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:41:12 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 16:40:21 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, char c)
{
	int	len;

	len = ft_lstsize(*stack);
	if (len > 1)
	{
		*stack = (*stack)->next;
		if (c == 'a')
			ft_putstr("ra\n");
		if (c == 'b')
			ft_putstr("rb\n");
	}
}

void	rotate_prime(t_list **stack1, t_list **stack2)
{
	rotate(stack1, 'c');
	rotate(stack2, 'c');
	ft_putstr("rr\n");
}
