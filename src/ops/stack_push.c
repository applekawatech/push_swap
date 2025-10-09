/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:34:38 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/12 16:32:29 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


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
