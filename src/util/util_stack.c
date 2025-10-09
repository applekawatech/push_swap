/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:41:45 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/06 16:41:48 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

void	free_stacks(t_stacks *stacks)
{
	if (stacks->a)
		free(stacks->a);
	if (stacks->b)
		free(stacks->b);
}


int	is_empty(t_stack *stack)
{
	return (stack->top == 0);
}

int	pop_top(t_stack *stack)
{
	if (stack->top == 0)
		return (0);
	stack->top--;
	return (stack->data[stack->top]);
}

int is_sorted(t_stack *a)
{
	int i = 0;
	while (i < a->top - 1)
	{
		if (a->data[i] > a->data[i + 1])
			return (0);
		i++;
	}
	return (1);
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

