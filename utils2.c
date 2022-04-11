/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:08:37 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 14:08:38 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	delete_element(t_vector *vec, int index)
{
	--vec->n;
	while (index < vec->n)
	{
		vec->elements[index] = vec->elements[index + 1];
		index++;
	}
}

t_vector	*dup_vec(t_vector vec)
{
	t_vector	*dup;

	dup = (t_vector *)malloc (sizeof(t_vector));
	dup->elements = (int *)malloc (sizeof(int) * vec.capac);
	ft_memcpy(dup->elements, vec.elements, vec.n * sizeof(int));
	dup->n = vec.n;
	dup->name = vec.name;
	dup->capac = vec.capac;
	return (dup);
}
