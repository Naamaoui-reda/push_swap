#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"
typedef struct s_vector
{
	int		*elements;
	int		n;
	int		capac;
	char	*name;
}t_vector;
typedef t_vector t_stack;
bool	is_number(char *str);
bool	ft_limit(long long x);
void	ft_init(t_vector *vec, char *name);
void	ft_insert(t_vector *vec, int element);

#endif