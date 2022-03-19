/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 00:39:13 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 18:37:36 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	is_sorted(t_list **stack)
{
	t_list	*tmp;
	int		len;
	int		i;

	len = ft_lstsize(*stack);
	tmp = *stack;
	i = 0;
	while (i < len - 1)
	{
		if (tmp->next->content < tmp->content)
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (1);
}
