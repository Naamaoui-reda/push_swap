/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:57:33 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/06 13:52:56 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		index;
	const char	*t;

	index = 0;
	t = s;
	while (index < n)
	{
		if ((unsigned char)t[index] == (unsigned char)c)
			return ((char *)(s + index));
		index++;
	}
	return (NULL);
}
