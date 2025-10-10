/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_stack2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:50:55 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/10 16:51:46 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void	push(t_stack *stack, int value)
{
	if (stack->top >= stack->max_size)
	{
		write(2, "Stack Overflow\n", 15);
		exit(1);
	}
	stack->data[stack->top] = value;
	stack->top++;
}

int	find_min_index(t_stack *a)
{
	int	i;
	int	min_i;
	int	min_v;

	i = 0;
	min_i = 0;
	min_v = a->data[0];
	while (i < a->top)
	{
		if (a->data[i] < min_v)
		{
			min_v = a->data[i];
			min_i = i;
		}
		i++;
	}
	return (min_i);
}

void	rotate_to_top(t_stack *a, int idx)
{
	int	top;
	int	ra_cnt;
	int	rra_cnt;

	top = a->top - 1;
	ra_cnt = top - idx;
	rra_cnt = idx + 1;
	if (ra_cnt <= rra_cnt)
	{
		while (ra_cnt--)
			ra(a);
	}
	else
	{
		while (rra_cnt--)
			rra(a);
	}
}
