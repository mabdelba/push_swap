/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:34:12 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 17:47:47 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{	
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *) malloc((len + 1) * sizeof (char));
	if (s2 == 0)
		return (0);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoiin(char *s1, char *s2)
{
	char	*tab;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		return (0);
	i = 0;
	j = 0;
	tab = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (tab == 0)
		return (tab);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[j])
		tab[i++] = s2[j++];
	tab[i] = '\0';
	free(s1);
	return (tab);
}
