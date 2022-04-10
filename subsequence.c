#include "header.h"

static t_stack	*long_seq_index(t_stack s, int index)
{
	int		i;
	t_stack	*seq;

	i = (index + 1) % s.n;
	seq = (t_stack *)malloc(sizeof (t_stack));
	ft_init(seq, "x");
	ft_insert(seq, s.elements[index]);
	while ((i - index - 1) < s.n)
	{
		if (s.elements[(i % s.n)] > seq->elements[seq->n - 1])
			ft_insert(seq,s.elements[i % s.n]);
		i++;
	}
	return (seq);
}

static bool	in_seq(int elem, int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
		if (elem == array[i++])
			return (true);
	return (false);
}

void	push_no_seq(t_stack *src, t_stack *dst, t_stack seq)
{
	int	i;
	int	iteration;

	iteration = src->n;
	i = 0;
	while (i < iteration)
	{
		if(in_seq(*(src->elements), seq.elements,seq.n))
			rotate(src, true);
		else
			push_to(src, dst, true);
		i++;
	}
}

t_stack	*long_seq(t_stack s)
{
	t_stack		*tmp1;
	t_stack		*tmp2;
	int			len;
	int			i;

	i = 0;
	len = 0;
	tmp2 = NULL;
	while (i < s.n)
	{
		tmp1 = long_seq_index(s, i);
		if (tmp1->n > len)
		{
			len = tmp1->n;
			if(tmp2 != NULL)
				free_single(tmp2);
			tmp2 = tmp1;
		}
		else
			free_single(tmp1);
		i++;
	}
	return (tmp2);
}