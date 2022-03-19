/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:27:38 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/15 23:40:38 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		compt;
	t_list	*tmp;

	compt = 0;
	tmp = lst;
	while (1)
	{
		lst = lst->next;
		compt++;
		if (lst == tmp)
			break ;
	}
	return (compt);
}
