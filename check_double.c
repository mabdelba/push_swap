/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:11:18 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/15 23:28:30 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
