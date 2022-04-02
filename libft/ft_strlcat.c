/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:44:51 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:58:21 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	if (size < k)
		j = j + size;
	else
	{
		j = j + k;
		while ((src[i] != '\0') && (k + 1 < size))
		{
			dst[k] = src[i];
			i++;
			k++;
		}
		dst[k] = '\0';
	}
	return (j);
}
