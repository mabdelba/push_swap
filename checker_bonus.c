/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:12:25 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/19 00:52:32 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	read_file(int fd, t_list **stacka, t_list **stackb)
{
	char	*line;

	line = get_next_line(fd);
	while (line)
	{
		check_instruct(line, stacka, stackb);
		free(line);
		line = get_next_line(fd);
	}
}

int	main(int ac, char **av)
{
	char	**tab;
	t_list	*stack_a;
	t_list	*stack_b;

	protect_ac_av(ac, av);
	tab = collection(ac, av);
	ft_protection(ac, tab, &ac);
	if (ac != 0)
		stack_a = stack(tab);
	stack_b = NULL;
	read_file(0, &stack_a, &stack_b);
	if (is_sorted(&stack_a) && stack_b == NULL)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free_stack(&stack_a);
	ft_free(tab);
	return (0);
}
