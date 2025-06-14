/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:34:38 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/08 17:18:33 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->top < 2)
		return ;
	tmp = a->data[a->top - 1];
	a->data[a->top - 1] = a->data[a->top - 2];
	a->data[a->top - 2] = tmp;
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->top < 2)
		return ;
	tmp = b->data[b->top - 1];
	b->data[b->top - 1] = b->data[b->top - 2];
	b->data[b->top - 2] = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
