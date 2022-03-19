/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:29:05 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/03 20:40:04 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == 0)
		return (NULL);
	head->content = *content;
	head->next = head;
	return (head);
}
