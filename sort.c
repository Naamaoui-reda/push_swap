/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:42:23 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/05 12:29:03 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_sort_sorted(t_stack *s)
{
	int	min_i;

	min_i = ft_circular(s->elements, s->n);
	if (min_i == 0)
		return (0);
	if (min_i == -1)
		return (-1);
	if (s->n - min_i < min_i)
		while (s->n - min_i++)
			rotate_reverse(s, true);
	else
		while(min_i--)
			rotate(s, true);
	return (1);
}

int	best_move(t_stack s, int index)
{
	int	best_moves;
	
	best_moves = 0;
	if (index == 0)
		return (0);
	if (s.n - index < index)
		while (s.n - index++)
			best_moves++;
	else
		while (index--)
			best_moves--;
	return (best_moves);
}

void	start_sort(t_stack *a, t_stack *b, int a_best, int b_best)
{
	while (min_int(ft_abs(a_best),ft_abs(b_best)) && (a_best * b_best > 0))
	{
		if (a_best < 0)
		{
			a_best++;
			b_best++;
			rr(a, b, true);
		}
		else
		{
			a_best--;
			b_best--;
			rrr(a, b, true);
		}
	}
	do_moves(a, a_best);
	do_moves(b, b_best);
	
}