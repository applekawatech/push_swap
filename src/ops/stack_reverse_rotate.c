/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:53:58 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/10 16:41:21 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_stack *a)
{
	int	first;
	int	i;

	if (a->top < 2)
		return ;
	first = a->data[0];
	i = 0;
	while (i < a->top - 1)
	{
		a->data[i] = a->data[i + 1];
		i++;
	}
	a->data[a->top - 1] = first;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int	first;
	int	i;

	if (b->top < 2)
		return ;
	first = b->data[0];
	i = 0;
	while (i < b->top - 1)
	{
		b->data[i] = b->data[i + 1];
		i++;
	}
	b->data[b->top - 1] = first;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
