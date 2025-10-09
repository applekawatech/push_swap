/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:04:33 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/09 17:10:44 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_len_3(t_stacks *s)
{
	int a;
	int	b;
	int	c;

	a = s->a->data[s->a->top - 1]; // top
	b = s->a->data[s->a->top - 2];
	c = s->a->data[s->a->top - 3];
	if (a <= b && b <= c)
		return ;
	if (a > b && b <= c && a <= c)
	{
		sa(s->a);
	}
	else if (a > b && b > c)
	{
		sa(s->a);
		rra(s->a);
	}
	else if (a > b && b <= c && a > c)
	{
		ra(s->a);
	}
	else if (a <= b && b > c && a <= c)
	{
		sa(s->a);
		ra(s->a);
	}
	else
	{
		rra(s->a);
	}
}

void	sort_len_5(t_stacks *s)
{

}