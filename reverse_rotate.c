/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:09:46 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 16:39:47 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack, char c)
{
	t_list	*tmp;
	int		len;

	len = ft_lstsize(*stack);
	if (len > 1)
	{
		tmp = ft_lstlast(*stack);
		*stack = tmp;
		if (c == 'a')
			ft_putstr("rra\n");
		if (c == 'b')
			ft_putstr("rrb\n");
	}
}

void	rev_rotprime(t_list **stack1, t_list **stack2)
{
	reverse_rotate(stack1, 'c');
	reverse_rotate(stack2, 'c');
	ft_putstr("rrr\n");
}
