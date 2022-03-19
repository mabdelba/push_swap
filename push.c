/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:12:46 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/19 00:40:42 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tap_instruction(char c)
{
	if (c == 'a')
		ft_putstr("pa\n");
	if (c == 'b')
		ft_putstr("pb\n");
}

void	free_node(t_list **stack)
{
	free(*stack);
	*stack = NULL;
}

void	push_ab(t_list **stack1, t_list **stack2, char c)
{
	t_list	*tmp;
	t_list	*aux;

	if (*stack2 != NULL)
	{
		tap_instruction(c);
		if (*stack1 == NULL)
			*stack1 = ft_lstnew(&((*stack2)->content));
		else
		{
			tmp = ft_lstnew(&((*stack2)-> content));
			tmp->next = *stack1;
			ft_lstlast(*stack1)->next = tmp;
			*stack1 = tmp;
		}
		aux = ft_lstlast(*stack2);
		if (aux->next == aux)
		{
			free_node(stack2);
			return ;
		}
		aux->next = (*stack2)->next;
		free(*stack2);
		*stack2 = aux->next;
	}
}
