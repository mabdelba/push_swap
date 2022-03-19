/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protection_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:13:22 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 01:48:15 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_protection(int ac, char **tab, int *size)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i] && ac)
	{
		j = 0;
		while (tab[i][j])
		{
			if (j == 0 && (tab[i][0] == '+' || tab[i][0] == '-'))
					j++;
			if (check_double(tab, tab[i], i) || ft_isdigit(tab[i][j])
					|| check_maxmin(tab[i]))
			{
				ft_putstr("Error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
	*size = i - 1;
}
