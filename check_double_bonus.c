/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:11:18 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 01:45:10 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_double(char **av, char *str, int pos)
{
	int	i;

	i = 1;
	while (i < pos)
	{
		if (ft_atoi(av[i]) == ft_atoi(str))
			return (1);
		i++;
	}
	return (0);
}
