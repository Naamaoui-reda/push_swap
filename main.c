/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:53:15 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/02 19:20:33 by rnaamaou         ###   ########.fr       */
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
	printf("suc");
}