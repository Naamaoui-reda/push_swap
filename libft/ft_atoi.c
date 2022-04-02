/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:44:40 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/16 16:55:06 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		signe;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str [i] == 32)
		i++;
	if (str[i] == '-')
	{
		signe = signe * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str [i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (signe * nb);
}
