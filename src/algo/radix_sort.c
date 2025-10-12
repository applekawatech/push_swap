/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:53:58 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/10 15:12:39 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_max_value(t_stack *stack)
{
	int	i;
	int	max;

	if (stack->top <= 0)
		return (0);
	max = stack->data[0];
	i = 1;
	while (i < stack->top)
	{
		if (stack->data[i] > max)
			max = stack->data[i];
		i++;
	}
	return (max);
}

static int	get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = stack_max_value(stack);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

static int	stack_size(t_stack *stack)
{
	return (stack->top);
}

void	radix_sort(t_stacks *s)
{
	t_radix	x;

	if (is_sorted(s->a) || stack_size(s->a) < 1)
		return ;
	x.i = 0;
	x.max_bits = get_max_bits(s->a);
	while (x.i < x.max_bits)
	{
		x.size = stack_size(s->a);
		x.j = 0;
		while (x.j < x.size)
		{
			if (stack_size(s->a) == 0)
				break ;
			if (((s->a->data[s->a->top - 1] >> x.i) & 1) == 0)
				pb(s);
			else
				ra(s->a);
			x.j++;
		}
		while (!is_empty(s->b))
			pa(s);
		x.i++;
	}
}
