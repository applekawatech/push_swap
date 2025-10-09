/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:55:37 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/05 17:59:13 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ra(t_stack *a)
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
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
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
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}
