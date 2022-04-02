/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:43:56 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/11 17:58:07 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dst, const void *src, size_t len)
{
	int	index;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		index = (int)len - 1;
		while (index >= 0)
		{
			*(char *)(dst + index) = *(char *)(src + index);
			index--;
		}
	}
	else
	{
		index = 0;
		while (index < (int)len)
		{
			*(char *)(dst + index) = *(char *)(src + index);
			index++;
		}
	}
	return (dst);
}
