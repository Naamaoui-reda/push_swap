/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:42:23 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/04 13:51:18 by rnaamaou         ###   ########.fr       */
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