/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:26 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/16 22:14:42 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	char		*buffer;
	const char	*buffer2;
	size_t		index;

	buffer = dst;
	buffer2 = src;
	index = 0;
	if (!dst && !src)
		return (NULL);
	while (index < size)
	{
		buffer[index] = buffer2[index];
		index++;
	}
	return (buffer);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	//int t[3]= {1, -12, 3};
// 	char *s = "1\20023";
// 	//int r[3];
// 	//int *p=r;
// 	char *d;

// 	//r = ft_memcpy(r, t, 7);
// 	ft_memcpy(d,s,2);
// 	printf("%u\n",d[1]);
// 	// printf("--%d*/%d-%d\n",r[0],r[1],r[2]);
// 	// printf("--%d*/%d-%d",p[0],p[1],p[2]);
// }
