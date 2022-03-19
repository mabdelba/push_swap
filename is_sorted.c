/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 00:39:13 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/16 16:53:11 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			return (1);
		tmp = tmp->next;
		i++;
	}
	return (0);
}
