/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:08:43 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 14:10:42 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_init(t_vector *vec, char *name)
{
	vec->n = 0;
	vec->capac = 2;
	vec->elements = malloc(sizeof(int) * (vec->capac + 1));
	vec->name = ft_strdup(name);
}

void	ft_realloc(t_vector *vec, int new_size)
{
	int		i;
	void	*new_el;

	i = 0;
	new_el = malloc(sizeof(int) * (new_size + 1));
	if (!new_el)
	{
		new_el = malloc(sizeof(int) * (new_size + 1));
	}
	ft_memcpy(new_el, vec->elements, (new_size + 1) * sizeof(int));
	free(vec->elements);
	vec->elements = new_el;
}

void	ft_insert(t_vector *vec, int element)
{
	if (vec->n == vec->capac)
	{
		vec->capac *= 2;
		ft_realloc(vec, vec->capac);
	}
	vec->elements[vec->n] = element;
	vec->n++;
}

void	ft_print_err(char *err, int err_len)
{
	write (2, err, err_len);
	exit (1);
}

void	write_move_name(char *move, char *name)
{
	write (1, move, ft_strlen(move));
	write (1, name, 1);
	write (1, "\n", 1);
}
