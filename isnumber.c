/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnumber.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:08:29 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 14:01:17 by rnaamaou         ###   ########.fr       */
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
	return (str[i] == '\0');
}

bool	ft_limit(long long x)
{
	if (x > INT_MAX || x < INT_MIN)
		return (0);
	return (1);
}
