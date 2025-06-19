/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:13:26 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/12 16:33:32 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

void	rra(t_stack *a)
{
	int	last;
	int	i;

	if (a->top < 2)
		return ;
	last = a->data[a->top - 1];
	i = a->top - 1;
	while (i > 0)
	{
		a->data[i] = a->data[i - 1];
		i--;
	}
	a->data[0] = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int	last;
	int	i;

	if (b->top < 2)
		return ;
	last = b->data[b->top - 1];
	i = b->top - 1;
	while (i > 0)
	{
		b->data[i] = b->data[i - 1];
		i--;
	}
	b->data[0] = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
