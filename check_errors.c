#include "header.h"

static void	ft_repeated(int *array, int n_el)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n_el - 1)
	{
		j = i + 1;
		while (j < n_el)
		{
			if (array[i] == array[j++])
				ft_print_err(ERROR_MSG,6);
		}
		i++;
	}
}

static void	ft_check_init_sta(char **av, int n_el, t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	ft_init(a,"a");
	ft_init(b,"b");
	while (i < n_el)
	{
		if(is_number(av[i]) && ft_limit(ft_atoi(av[i])))
			ft_insert(a, ft_atoi(av[i]));
		else
		{
			free_pars(av,a->n);
			free (a->elements);
			free (b->elements);
			free (a->name);
			free (b->name);
			ft_print_err(ERROR_MSG,6);
		}
		i++;
	}
	ft_repeated(a->elements,n_el);
}
static int	ft_calc_eleme(char *s,char c)
{
	int i;
	int	to;

	i = 0;
	to = 0;
	while (s[i])
	{
		while(s[i] == c)
			i++;
		while (s[i] != c && s[i])
			i++;
		if(s[i - 1] != c)
			to++;
	}
	return (to); 
}
void	ft_check_err(t_stack *a,t_stack *b,char **av,int ac)
{
	char	**sor;;
	char	*buff;
	int		i;
	int		n_el;

	i = 1;
	buff = ft_strdup("");
	while (i < ac)
	{
		buff = ft_strjoin(buff,av[i++]);
		buff = ft_strjoin(buff, " ");
	}
	sor = ft_split(buff, ' ');
	n_el = ft_calc_eleme(buff, ' ');
	free(buff);
	ft_check_init_sta(sor,n_el,a,b);
	free_pars(sor,n_el);
}