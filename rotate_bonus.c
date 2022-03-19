/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:41:12 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 18:11:48 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate(t_list **stack)
{
	int	len;

	len = ft_lstsize(*stack);
	if (len > 1)
	{
		*stack = (*stack)->next;
	}
}

void	rotate_prime(t_list **stack1, t_list **stack2)
{
	rotate(stack1);
	rotate(stack2);
}
