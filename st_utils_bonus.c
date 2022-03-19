/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:34:27 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/19 00:29:48 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

void	check_instruct(char *line, t_list **stacka, t_list **stackb)
{
	if (ft_strncmp(line, "sa\n") == 0)
		swap_ab(*stacka);
	else if (ft_strncmp(line, "sb\n") == 0)
		swap_ab(*stackb);
	else if (ft_strncmp(line, "ss\n") == 0)
		swap_s(*stacka, *stackb);
	else if (ft_strncmp(line, "pa\n") == 0)
		push_ab(stacka, stackb);
	else if (ft_strncmp(line, "pb\n") == 0)
		push_ab(stackb, stacka);
	else if (ft_strncmp(line, "ra\n") == 0)
		rotate(stacka);
	else if (ft_strncmp(line, "rb\n") == 0)
		rotate(stackb);
	else if (ft_strncmp(line, "rr\n") == 0)
		rotate_prime(stacka, stackb);
	else if (ft_strncmp(line, "rra\n") == 0)
		reverse_rotate(stacka);
	else if (ft_strncmp(line, "rrb\n") == 0)
		reverse_rotate(stackb);
	else if (ft_strncmp(line, "rrr\n") == 0)
		rev_rotprime(stacka, stackb);
	else
		error();
}
