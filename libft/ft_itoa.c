/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:16:08 by rnaamaou          #+#    #+#             */
/*   Updated: 2021/11/13 22:48:44 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_rev(char *s)
{
	size_t	i;
	size_t	l;
	char	tmp;

	i = 0;
	l = ft_strlen(s);
	while (i < l / 2)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
		i++;
	}
}
//reverse string

int	ft_test_signe(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
//switch number from neg to pos

char	*ft_itoa(int n)
{
	int		signe;
	char	*s;
	size_t	l;

	signe = (n < 0);
	s = ft_calloc(11 + signe, sizeof(*s));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	l = 0;
	while (n != 0)
	{
		s[l++] = 48 + ft_test_signe(n % 10);
		n = n / 10;
	}
	if (signe)
		s[l] = '-';
	ft_rev(s);
	return (s);
}
