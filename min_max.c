/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:07:15 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/03 14:41:58 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_min(int *array, int size)
{
	int	min;
	int	min_i;
	int	i;

	i = 1;
	min = array[0];
	min_i = 0;
	while (i < size)
	{
		if (array[i] < min)
		{
			min = array[i];
			min_i = i;
		}
		i++;
	}
	return (min_i);
}

int	ft_max(int *array, int size)
{
	int	max;
	int	max_i;
	int	i;

	i = 1;
	max = array[0];
	max_i = 0;
	while (i < size)
	{
		if (array[i] > max)
		{
			max = array[i];
			max_i = i;
		}
		i++;
	}
	return (max_i);
}

int	ft_is_sorted(int *array, int size)
{
	int	i;
	
	i = 0;
	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_circular(int *array, int size)
{
	int	i;
	int	min_i;

	min_i = ft_min(array, size);
	i = min_i + 1;
	while ((i + 1) % size != min_i)
	{
		if (array[i % size] > array[(i + 1) % size])
			return (-1);
		i++;
	} 
	return (min_i);
}
