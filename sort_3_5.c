/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:04:33 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/08/24 16:04:49 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

void	sort_len_3(t_stacks *s)
{

	int v0 = s->a->data[s->a->top];
	int v1 = s->a->data[s->a->top - 1];
	int v2 = s->a->data[s->a->top - 2];
	if (v0 > v1 && v0 > v2)
		ra(s->a);
	else if (v1 > v0 && v1 > v2)
		rra(s->a);
	if (s->a->data[s->a->top] > s->a->data[s->a->top-1])
		sa(s->a);
}