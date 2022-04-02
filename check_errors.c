#include "header.h"

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
			
		}
	}
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

}