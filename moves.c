/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:32:01 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 14:04:02 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rr(t_stack *a, t_stack *b, bool print)
{
	rotate(a, false);
	rotate(b, false);
	if (print)
		write (1, "rr\n", 3);
}

void	rrr(t_stack *a, t_stack *b, bool print)
{
	rotate_reverse(a, false);
	rotate_reverse(b, false);
	if (print)
		write (1, "rrr\n", 4);
}

void	ss(t_stack *a, t_stack *b, bool print)
{
	swap_top(a, false);
	swap_top(b, false);
	if (print)
		write (1, "ss\n", 3);
}
