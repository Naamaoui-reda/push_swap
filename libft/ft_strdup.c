/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:48:55 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/11 15:44:01 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include  <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 1;
	j = 0;
	while (src[j])
	{
		i++;
		j++;
	}
	dest = (char *)malloc (i * sizeof(char));
	if (dest == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
