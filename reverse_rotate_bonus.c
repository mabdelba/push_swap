/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:09:46 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 18:12:12 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	int		len;

	len = ft_lstsize(*stack);
	if (len > 1)
	{
		tmp = ft_lstlast(*stack);
		*stack = tmp;
	}
}

void	rev_rotprime(t_list **stack1, t_list **stack2)
{
	reverse_rotate(stack1);
	reverse_rotate(stack2);
}
