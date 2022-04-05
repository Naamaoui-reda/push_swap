/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absolute.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:13:33 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/05 11:25:43 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	max_int(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	min_int(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	ft_abs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}

char	**ft_dup_2d(char **av,int n_el)
{
	char	**new;
	int		i;

	i = 0;
	new = (char **)malloc(sizeof(char *) * n_el);
	if (new == NULL)
		ft_print_err(ERROR_MSG,6);
	while (i < n_el)
	{
		new[i] = ft_strdup(av[i]);
		i++;
	}
	return (new);
}