/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:52:29 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/10 11:43:52 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	nearest_num(t_stack s, int num)
{
	int	index;
	int	min_sub;
	int	min_index;
	int	curr_sub;
	
	min_sub = -1;
	index = 0;
	while (index < s.n)
	{
		curr_sub = s.elements[index] - num;
		if ((curr_sub < min_sub && curr_sub > 0) || (curr_sub > 0 && min_sub < 0))
		{
			min_sub = curr_sub;
			min_index = index;
		}
		index++;
	}
	return (min_index);
}

int	calc_moves(int a_best, int b_best)
{
	int	moves;

	if (a_best * b_best < 0)
		moves = ft_abs(a_best) + ft_abs(b_best);
	else
		moves = max_int(ft_abs(a_best), ft_abs(b_best));
	return (moves);
}

void	do_moves(t_stack *s, int moves)
{
	while (moves < 0)
	{
		++moves;
		rotate(s, true);
	}
	while (moves > 0)
	{
		--moves;
		rotate_reverse(s, true);
	}
}