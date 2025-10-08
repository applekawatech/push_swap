/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:01:31 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/05 12:38:02 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	int	get_max_bits(t_stack *stack)
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

static	int	stack_max_value(t_stack *stack)
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

static int peek(t_stack *stack)
{
	if (stack->top <= 0)
		return (-1);
	return (stack->data[stack->top - 1]);
}

void	radix_sort(t_stacks *s)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	if (is_sorted(s->a) || stack_size(s->a) < 2)
		return;
	i = 0;
	max_bits = get_max_bits(s->a);
	while (i < max_bits)
	{
		size = stack_size(s->a);
		j = 0;
		while (j < size)
		{
			if (stack_size(s->a) == 0)
				break;
			if (((s->a->data[s->a->top - 1] >> i) & 1) == 0)
				pb(s);
			else
				ra(s->a);
			j++;
		}
		while (!is_empty(s->b))
			pa(s);
		i++;
	}
}
