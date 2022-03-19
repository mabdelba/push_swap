/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:19:55 by mabdelba          #+#    #+#             */
/*   Updated: 2022/03/18 22:54:41 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int			ft_strncmp(const char *s1, const char *s2);
long long	ft_atoi_l(const char	*str);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_putstr(char *str);
typedef struct s_list
{
	int				content;
	int				moves;
	int				pos;
	struct s_list	*next;
}			t_list;
typedef struct s_var
{
	int	i;
	int	j;
	int	z;
	int	val;
	int	drp;
	int	compt;
	int	min;
	int	max;
	int	ppt;
	int	pos;
}			t_var;
void		ft_lstadd_front(t_list **alst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_back(t_list **alst, t_list *new);
t_list		*ft_lstnew(int *content);
int			check_double(char **av, char *str, int pos);
void		ft_putstr(char *str);
int			check_maxmin(char *str);
void		swap_ab(t_list *stack, char c);
void		swap_s(t_list *stack1, t_list *stack2);
void		push_ab(t_list **stack1, t_list **stack2, char c);
t_list		*stack(char **av);
void		rotate(t_list **stack, char c);
void		rotate_prime(t_list **stack1, t_list **stack2);
void		reverse_rotate(t_list **stack, char c);
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
void		final_sort(t_list **stack);
int			is_sorted(t_list **stack);
void		sort_three(t_list **stack);
int			get_moves_of_a(int val, t_list **stack, int *drp);
void		stock_moves_of_b(t_list **stack);
void		print2(t_list **stack);
void		moves_total(t_list **stack_a, t_list **stack_b);
int			min_of_moves(t_list **stack_a, t_list **stack_b);
void		rotate_to_push(t_list **stack_a, t_list **stack_b);
void		push_toa(t_list **stack_a, t_list **stack_b);
void		sort_five(t_list **stacka, t_list **stackb);
void		fonction_return(int pos, int i, int *drp, int *val);
void		one_different(t_var *var, t_list **stack_a, t_list **stack_b);
void		zero_different(t_var *var, t_list **stack_a, t_list **stack_b);
void		equale_zero(t_var *var, t_list **stack_a, t_list **stack_b);
void		equale_one(t_var *var, t_list **stack_a, t_list **stack_b);
void		ft_free(char **str);
#endif