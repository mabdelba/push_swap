/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implement_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:30:02 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/15 23:43:20 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*stack(char **av)
{
	t_list	*lst;
	int		var;
	int		i;

	var = ft_atoi(av[1]);
	lst = ft_lstnew(&var);
	i = 2;
	while (av[i])
	{
		var = ft_atoi(av[i]);
		ft_lstadd_back(&lst, ft_lstnew(&var));
		i++;
	}
	return (lst);
}
