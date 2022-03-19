/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:13:03 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/19 00:27:29 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int			ft_strncmp(const char *s1, const char *s2);
void		ft_putstr(char *str);
typedef struct s_list
{
	int				content;
	int				moves;
	int				pos;
	struct s_list	*next;
}			t_list;
t_list		*ft_lstnew(int *content);
int			check_double(char **av, char *str, int pos);
int			check_maxmin(char *str);
int			ft_atoi(const char	*str);
long long	ft_atoi_l(const char	*str);
int			ft_isdigit(int c);
void		ft_lstadd_back(t_list **alst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		swap_ab(t_list *stack);
void		swap_s(t_list *stack1, t_list *stack2);
void		push_ab(t_list **stack1, t_list **stack2);
t_list		*stack(char **av);
void		rotate(t_list **stack);
void		rotate_prime(t_list **stack1, t_list **stack2);
void		reverse_rotate(t_list **stack);
void		rev_rotprime(t_list **stack1, t_list **stack2);
char		*ft_strjoin(int size, char **strs, char *sep);
char		**ft_split(char const *s, char c);
char		**collection(int ac, char **av);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			*long_list(t_list *stack, int size, int *prec);
void		push_to_b(t_list **stacka, t_list **stackb, int size);
void		print0(t_list **stack);
void		print1(int *tab, int prec);
void		ft_protection(int ac, char **av, int *size);
int			is_sorted(t_list **stack);
void		print2(t_list **stack);
void		protect_ac_av(int ac, char **av);
void		error(void);
void		check_instruct(char *line, t_list **stacka, t_list **stackb);
char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
int			ft_strchr(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_strjoiin(char *s1, char *s2);
void		ft_free(char **str);
void		free_stack(t_list **stack);
#endif  