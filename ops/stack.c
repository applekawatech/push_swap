/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:34:38 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/12 16:32:29 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->top < 2)
		return ;
	tmp = a->data[a->top - 1];
	a->data[a->top - 1] = a->data[a->top - 2];
	a->data[a->top - 2] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->top < 2)
		return ;
	tmp = b->data[b->top - 1];
	b->data[b->top - 1] = b->data[b->top - 2];
	b->data[b->top - 2] = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
