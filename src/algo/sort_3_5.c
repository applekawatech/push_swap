/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:04:33 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/12 00:09:24 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_len_2(t_stacks *s)
{
	int	a;
	int	b;

	if (s->a->top < 2)
		return ;
	if (s->a->top == 2)
	{
		a = s->a->data[s->a->top - 1];
		b = s->a->data[s->a->top - 2];
		if (a > b)
			sa(s->a);
	}
}

static void	sort_len_3(t_stacks *s)
{
	int	a;
	int	b;
	int	c;

	a = s->a->data[s->a->top - 1];
	b = s->a->data[s->a->top - 2];
	c = s->a->data[s->a->top - 3];
	if (a <= b && b <= c)
		return ;
	if (a > b && a > c)
		ra(s->a);
	else if (b > a && b > c)
		rra(s->a);
	a = s->a->data[s->a->top - 1];
	b = s->a->data[s->a->top - 2];
	if (a > b)
		sa(s->a);
	if (s->a->top < 4)
		return ;
}

static void	sort_len_4(t_stacks *s)
{
	int	i;

	i = find_min_index(s->a);
	rotate_to_top(s->a, i);
	pb(s);
	sort_len_3(s);
	pa(s);
}

static void	sort_len_5(t_stacks *s)
{
	int	i;
	int	top;
	int	under;

	i = find_min_index(s->a);
	rotate_to_top(s->a, i);
	pb(s);
	i = find_min_index(s->a);
	rotate_to_top(s->a, i);
	pb(s);
	if (s->b->top >= 2)
	{
		top = s->b->top - 1;
		under = s->b->top - 2;
		if (s->b->data[top] < s->b->data[under])
			sb(s->b);
	}
	sort_len_3(s);
	pa(s);
	pa(s);
}

void	sort_small(t_stacks *s)
{
	if (s->a->top <= 1)
		return ;
	else if (s->a->top == 2)
		sort_len_2(s);
	else if (s->a->top <= 3)
		sort_len_3(s);
	else if (s->a->top <= 4)
		sort_len_4(s);
	else if (s->a->top <= 5)
		sort_len_5(s);
}
