/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:29:03 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/10 11:41:52 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.h"

void	free_pars(char **av,int n_el)
{
	while (n_el)
		free(av[--n_el]);
	free(av);
}

void	free_single(t_stack	*s)
{
	free (s->name);
	free (s->elements);
	free (s);
}

void	free_pair(t_stack a, t_stack b)
{
	free(a.elements);
	free (b.elements);
	free (a.name);
	free (b.name);
}