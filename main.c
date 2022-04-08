/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:53:15 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/08 01:25:33 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	t_stack	*tmp;
	
	tmp = NULL;
	if (ac <= 1)
		return (1);
	ft_check_err(&a, &b, av, ac);
	if (ft_sort_sorted(&a) == -1)
	{
		if (a.n <= 3)
			small_sorting(&a);
		else if (a.n < 6)
			sort_small_number(&a, &b);
		else
		{
			tmp = lo
		}
	}
}