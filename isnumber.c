/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnumber.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:08:29 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/12 13:34:05 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

bool	is_number(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (false);
	i += (str[0] == '-' || str[0] == '+');
	while (ft_isdigit(str[i]))
		i++;
	if (str[i - 1] == '-' || str[i - 1] == '+')
		ft_print_err(ERROR_MSG, 6);
	return (str[i] == '\0');
}

bool	ft_limit(long long x)
{
	if (x > INT_MAX || x < INT_MIN)
		return (0);
	return (1);
}
