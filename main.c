/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:39:43 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/19 00:35:52 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

void	protect_ac_av(int ac, char **av)
{
	int	i;

	if (ac <= 1)
		exit(0);
	i = 1;
	while (av[i])
	{
		if (ft_strncmp(av[i], "") == 0)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		i++;
	}
}

void	free_stack(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (1)
	{
		free(temp);
		temp = temp->next;
		if (temp == *stack)
			break ;
	}
}

int	main(int ac, char **av)
{
	int		size;
	char	**tab;
	t_list	*stack_a;
	t_list	*stack_b;

	protect_ac_av(ac, av);
	tab = collection(ac, av);
	ft_protection(ac, tab, &size);
	if (size != 0)
		stack_a = stack(tab);
	stack_b = NULL;
	if (size == 3 && is_sorted(&stack_a))
		sort_three(&stack_a);
	else if (size == 5 && is_sorted(&stack_a))
		sort_five(&stack_a, &stack_b);
	else if (size > 1 && is_sorted(&stack_a))
	{
		push_to_b(&stack_a, &stack_b, size);
		push_toa(&stack_a, &stack_b);
		final_sort(&stack_a);
	}
	free_stack(&stack_a);
	ft_free(tab);
	return (0);
}
