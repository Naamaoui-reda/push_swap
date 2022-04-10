#include "header.h"

void	push_half(t_stack *a, t_stack *b)
{
	int	half;
	int	max_half;
	int	max_index;

	max_half = a->n / 2;
	while (a->n > max_half)
	{
		half = a->n / 2;
		max_index = ft_max(a->elements,a->n);
		if (max_index < half)
			max_index = (-max_index);
		else
			max_index = a->n - max_index;
		do_moves(a, max_index);
		push_to (a, b, true);
		if (b->n >= 2)
			rotate(b, true);
	}
}

void	small_sorting(t_stack *a)
{
	swap_top (a, true);
	ft_sort_sorted(a);
}

void	sort_small_number(t_stack *a, t_stack *b)
{
	while (a->n != 3)
	{
		if (ft_max(a->elements,a->n) == 0)
			rotate (a, true);
		push_to(a, b, true);
	}
	if (ft_circular(a->elements, a->n) == -1)
		swap_top(a, true);
	sort_using_ls(a, b, 0, -1);
	ft_sort_sorted(a);
}