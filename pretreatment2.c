/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretreatment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:49:34 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/07/11 14:54:50 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

void	init_stacks(t_stacks *stacks, int size)
{
	stacks->a = malloc(sizeof(t_stack));
	stacks->b = malloc(sizeof(t_stack));
	if (!stacks->a || !stacks->b)
	{
		write(2, "Malloc Error for t_stack structs\n", 33);
		exit(1);
	}
	stacks->a->data = malloc(sizeof(int) * size);
	stacks->b->data = malloc(sizeof(int) * size);
	if (!stacks->a->data || !stacks->b->data)
	{
		write(2, "Malloc Error for stack data arrays\n", 35);
		free(stacks->a);
		free(stacks->b);
		exit(1);
	}
	stacks->a->top = 0;
	stacks->b->top = 0;
	stacks->a->max_size = size;
	stacks->b->max_size = size;
}

void	push(t_stack *stack, int value)
{
	if (stack->top >= stack->max_size)
	{
		write(2, "Stack Overflow\n", 15);
		exit(1);
	}
	stack->data[stack->top] = value;
	stack->top++;
}

int	get_index(int *sorted, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == value)
			return (i);
		i++;
	}
	write(2, "Value not found\n", 17);
	exit(1);
}

void	free_stacks(t_stacks *stacks)
{
	if (stacks->a->data)
		free(stacks->a->data);
	free(stacks->a);
	if (stacks->b->data)
		free(stacks->b->data);
	free(stacks->b);
}

int	is_empty(t_stack *stack)
{
	return (stack->top == 0);
}
