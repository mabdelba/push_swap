/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:46:42 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 23:52:50 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// leaks a gerer !
void	initial(t_var *var, int val, int *tab1)
{
		var->j = 0;
		var->val = val;
		var->compt = 0;
		tab1[0] = var->val;
}

int	*alloc(int size)
{
	int	*tab;

	tab = malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	return (tab);
}

void	condition(int val, t_var *var, int *tab)
{
	if (val > var->val)
	{
		var->compt++;
		var->val = val;
		tab[var->compt] = var->val;
	}	
}

void	all_cases(t_var *var, int *prec, int **tab1, int **tab2)
{
	if (var->compt > *prec)
	{
		free(*tab2);
		*tab2 = *tab1;
		*prec = var->compt;
	}
	else
		free(*tab1);
}

int	*long_list(t_list *stack, int size, int *prec)
{
	int		*tab1;
	int		*tab2;
	t_list	*aux;
	t_var	var;

	*prec = 0;
	var.i = 0;
	tab2 = NULL;
	while (var.i < size)
	{
		aux = stack->next;
		tab1 = alloc(size);
		initial(&var, stack->content, tab1);
		while (var.j < size)
		{
			condition(aux->content, &var, tab1);
			aux = aux->next;
			var.j++;
		}
		all_cases(&var, prec, &tab1, &tab2);
		stack = stack->next;
		var.i++;
	}
	return (tab2);
}
