#include "header.h"

char	**read_instruction(void)
{
	char	*buff;
	char	*tmp;
	char	**inst;

	tmp = ft_strdup("");
	while (true)
	{
		buff = get_next_line (0);
		if (buff == NULL)
			break;
		if (move_exist(buff) == 0)
			return (NULL);
		tmp = ft_strjoin(tmp, buff);
		free (buff);
	}
	inst = ft_split (tmp, '\n');
	if (tmp)
		free (tmp);
	return (inst);
}

void	check_if_sort(char **inst, t_stack *a, t_stack *b, int n)
{
	int	n_inst;

	n_inst = 0;
	while (inst[n_inst])
		n_inst++;
	if (inst != 0)
	{
		if (test_moves (inst, a, b) == -1)
			write (1, "Error\n", 6);
		else if (ft_is_sorted(a->elements, a->n) && n == a->n)
			write (1, "ok\n", 3);
		else 
			write (1, "ko\n", 3);
		free_pars(inst, n_inst);
	}
}

int	main(int ac, char **args)
{
	t_stack	a;
	t_stack	b;
	int	i;
	int	n_elem;
	char **inst;

	if (ac < 2)
		return (1);
	inst = NULL;
	i = 0;
	ft_check_err(&a, &b, args, ac);
	n_elem = a.n;
	inst = read_instruction ();
	if (inst != NULL)
		check_if_sort(inst, &a, &b, n_elem);
	else
		write (1, "Error\n", 6);
	free_pair (a, b);
}