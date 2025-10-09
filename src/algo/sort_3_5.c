/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:04:33 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/05 12:36:17 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_len_3(t_stacks *s)
{
	if (is_sorted(s->a))
		return;
	int v0 = s->a->data[s->a->top - 1];
	int v1 = s->a->data[s->a->top - 2];
	int v2 = s->a->data[s->a->top - 3];
	if (v0 > v1 && v0 > v2)
		ra(s->a);
	else if (v1 > v0 && v1 > v2)
		rra(s->a);
	if (s->a->data[s->a->top - 1] > s->a->data[s->a->top - 2])
		sa(s->a);
}

