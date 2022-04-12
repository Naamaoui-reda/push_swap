/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:59:25 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/12 13:34:23 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"
# define ERROR_MSG "Error\n"

typedef struct s_vector
{
	int		*elements;
	int		n;
	int		capac;
	char	*name;
}t_vector;
typedef t_vector	t_stack;
int		ft_check_space(char *s);
bool	is_number(char *str);
bool	ft_limit(long long x);
void	ft_init(t_vector *vec, char *name);
void	ft_insert(t_vector *vec, int element);
void	free_pars(char **av, int n_el);
void	free_pair(t_stack a, t_stack b);
void	free_single(t_stack	*s);
void	ft_print_err(char *err, int err_len);
void	ft_check_err(t_stack *a, t_stack *b, char **av, int ac);
int		ft_min(int *array, int size);
int		ft_max(int *array, int size);
int		ft_is_sorted(int *array, int size);
int		ft_circular(int *array, int size);
void	write_move_name(char *move, char *name);
void	rotate(t_stack *s, bool print);
void	rotate_reverse(t_stack *s, bool print);
int		max_int(int a, int b);
int		min_int(int a, int b);
int		ft_abs(int x);
char	**ft_dup_2d(char **av, int n_el);
void	rrr(t_stack *a, t_stack *b, bool print);
void	rr(t_stack *a, t_stack *b, bool print);
int		ft_sort_sorted(t_stack *s);
int		best_move(t_stack s, int index);
void	start_sort(t_stack *a, t_stack *b, int a_best, int b_best);
int		nearest_num(t_stack s, int num);
int		calc_moves(int a_best, int b_best);
void	do_moves(t_stack *s, int moves);
void	delete_element(t_vector *vec, int index);
void	swap_top(t_stack *s, bool print);
void	push_to(t_stack *src, t_stack *dst, bool print);
void	sort_using_ls(t_stack *a, t_stack *b, int index, int min);
void	sort_small_number(t_stack *a, t_stack *b);
void	small_sorting(t_stack *a);
void	push_no_seq(t_stack *src, t_stack *dst, t_stack seq);
t_stack	*long_seq(t_stack s);
#endif