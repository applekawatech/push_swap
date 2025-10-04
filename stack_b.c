/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:55:37 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/19 13:10:55 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

void	pa(t_stacks *s)
{
	if (s->b->top == 0)
		return ;
	s->a->data[s->a->top] = s->b->data[s->b->top - 1];
	s->a->top++;
	s->b->top--;
	write(1, "pa\n", 3);
}

void	pb(t_stacks *s)
{
	if (s->a->top == 0)
		return ;
	s->b->data[s->b->top] = s->a->data[s->a->top - 1];
	s->b->top++;
	s->a->top--;
	write(1, "pb\n", 3);
}

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
