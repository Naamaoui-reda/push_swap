#include "header.h"

int	move_exist(char *move)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(move);
	if (ft_strchr(move, '\n'))
		len -= 1;
	if ((++i && ft_strncmp(move, "pa", len) == 0)
		|| (++i && ft_strncmp(move, "pb", len) == 0)
		|| (++i && ft_strncmp(move, "ra", len) == 0)
		|| (++i && ft_strncmp(move, "rb", len) == 0)
		|| (++i && ft_strncmp(move, "rr", len) == 0)
		|| (++i && ft_strncmp(move, "rra", len) == 0)
		|| (++i && ft_strncmp(move, "rrb", len) == 0)
		|| (++i && ft_strncmp(move, "rrr", len) == 0)
		|| (++i && ft_strncmp(move, "sa", len) == 0)
		|| (++i && ft_strncmp(move, "sb", len) == 0)
		|| (++i && ft_strncmp(move, "ss", len) == 0))
			return (i);
	return (0);
}

void	move (int key, t_stack *a, t_stack *b)
{
	if (key == 1 && (b->n))
		push_to (b, a, false);
	else if (key == 2 && (a->n))
		push_to (a, b, false);
	else if (key == 3)
		rotate (a, false);
	else if (key == 4)
		rotate (b, false);
	else if (key == 5)
		rr (a, b, false);
	else if (key == 6)
		rotate_reverse (a, false);
	else if (key == 7)
		rotate_reverse (b, false);
	else if (key == 8)
		rrr (a, b, false);
	else if (key == 9)
		swap_top (a, false);
	else if (key == 10)
		swap_top (b, false);
	else if (key == 11)
		ss (a, b, false);
}

int	test_moves(char **moves, t_stack *a, t_stack *b)
{
	int	i;
	int	key;

	i = 0;
	while (moves[i])
	{
		key = move_exist(moves[i]);
		move(key, a, b);
		i++;
	}
	return (1);
}