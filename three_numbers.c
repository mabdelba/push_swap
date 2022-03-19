/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:43:52 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 16:48:56 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack)
{
	int	val1;
	int	val2;
	int	val3;

	while (is_sorted(stack))
	{
		val1 = (*stack)->content;
		val2 = (*stack)->next->content;
		val3 = (*stack)->next->next->content;
		if ((val3 > val1 && val1 > val2) || (val1 > val2 && val2 > val3)
			|| (val2 > val3 && val3 > val1))
			swap_ab(*stack, 'a');
		if (val2 > val1 && val1 > val3)
			reverse_rotate(stack, 'a');
		if (val1 > val3 && val3 > val2)
			rotate(stack, 'a');
	}
}
