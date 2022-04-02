/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:57:39 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 03:21:13 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s)
		return (NULL);
	i = 0;
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	while (p[i] != '\0')
	{
		p[i] = f(i, p[i]);
		i++;
	}
	return (p);
}
