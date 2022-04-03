/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:00:13 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/03 16:27:12 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rotate(t_stack *s, bool print)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = s->elements[0];
	while (i < s->elements - 1)
	{
		s->elements[i] =  s->elements [i + 1];
		i++;
	}
	s->elements[i] = tmp;
	if (print)
		write_move_name("r",s->name);
}

void	rotate_reverse(t_stack *s,bool print)
{
	int	i;
	int	tmp;

	i = s->n - 1;
	tmp = s->elements[s->n - 1];
	
}