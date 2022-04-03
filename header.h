#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"
# define ERROR_MSG "Error\n"
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
void	free_pars(char **av,int n_el);
void	ft_print_err(char *err, int err_len);
void	ft_check_err(t_stack *a,t_stack *b,char **av,int ac);
int		ft_min(int *array, int size);
int		ft_max(int *array, int size);
int		ft_is_sorted(int *array, int size);
int		ft_circular(int *array, int size);
void	write_move_name(char *move, char *name);
void	rotate(t_stack *s, bool print);
#endif