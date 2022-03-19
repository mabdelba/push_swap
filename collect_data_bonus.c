/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_data_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:33:17 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 16:03:23 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	**collection(int ac, char **av)
{
	char	*tab;
	char	**ret;

	tab = ft_strjoin(ac, av, " ");
	ret = ft_split(tab, ' ');
	free(tab);
	return (ret);
}
