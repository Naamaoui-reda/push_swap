/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:00:13 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 14:03:34 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	rotate(t_stack *s, bool print)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = s->elements[0];
	while (i < s->n - 1)
	{
		s->elements[i] = s->elements [i + 1];
		i++;
	}
	s->elements[i] = tmp;
	if (print)
		write_move_name("r", s->name);
}

void	rotate_reverse(t_stack *s, bool print)
{
	int	i;
	int	tmp;

	i = s->n - 1;
	tmp = s->elements[s->n - 1];
	while (i > 0)
	{
		s->elements[i] = s->elements[i - 1];
		i--;
	}
	s->elements[0] = tmp;
	if (print)
		write_move_name("rr", s->name);
}

void	swap_top(t_stack *s, bool print)
{
	swap(&(s->elements[0]), &(s->elements[1]));
	if (print == true)
		write_move_name("s", s->name);
}

void	push_to(t_stack *src, t_stack *dst, bool print)
{
	ft_insert(dst, src->elements[0]);
	rotate_reverse(dst, false);
	delete_element(src, 0);
	if (print)
		write_move_name("p", dst->name);
}
