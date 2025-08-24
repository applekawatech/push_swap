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

#include "push_stark.h"

void	sort_len_3(t_stack *s)
{
	int	max_data;

	int v0 = s->a->data[s->a->top];     // top
	int v1 = s->a->data[s->a->top - 1]; // 次
	int v2 = s->a->data[s->a->top - 2]; // その次

	if (v0 >= v1 && v0 >= v2)
		ra(s);
			else if (v1 >= v0 && v1 >= v2)
				rra(s);
					else
	if (a->data[a->top] > a->data[a->top - 1])
		sa(s);
}
