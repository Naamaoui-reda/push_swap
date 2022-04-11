/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:17:36 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/04/11 13:50:06 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char			*str;
	unsigned int	index_s;
	int				index_l;

	index_l = 0;
	index_s = 0;
	if (!s)
		return (NULL);
	if (len <= ft_strlen(s + start))
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	if (str == NULL)
		return (NULL);
	while (s[index_s])
	{
		if (index_s >= start && index_l < len)
		{
			str[index_l] = s[index_s];
			index_l++;
		}
		index_s++;
	}
	str[index_l] = 0;
	return (str);
}
