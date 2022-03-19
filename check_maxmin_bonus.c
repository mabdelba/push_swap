/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_maxmin_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:13:43 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 01:45:24 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_maxmin(char *str)
{
	if (ft_atoi_l(str) > 2147483647 || ft_atoi_l(str) < -2147483648)
		return (1);
	else
		return (0);
}
