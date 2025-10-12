/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:28:08 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/12 00:16:36 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void dump(const t_stack *a)
{
	write(2, "A:", 2);
	for (int i = 0; i < a->top; i++) {
		char buf[64];
		int n = sprintf(buf, " %d", a->data[i]);
		write(2, buf, n);
	}
	write(2, "  | top=", 8);
	char b2[16]; int n2 = sprintf(b2, "%d\n", a->top);
	write(2, b2, n2);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			*values;
	int			size;
	int			i;


	if (!validate_args(argc, argv))
		return (write(2, "Error\n", 6), 1);
	size = argc - 1;
	values = malloc(sizeof(int) * size);
	if (!values)
		return (write(2, "Malloc Error\n", 13), 1);
	i = -1;
	while (++i < size)
		values[i] = ft_atoi(argv[i + 1]);
	int sorted = is_sorted(stacks.a);
	if (sorted == 1)
		return (0);
	index_array(values, size);
	init_stacks(&stacks, size);
	while (--i >= 0)
		push(stacks.a, values[i]);
	dump(stacks.a);
	dprintf(2, "is_sorted=%d\n", sorted);
	if (size <= 5)
		sort_small(&stacks);
	else
		radix_sort(&stacks);
	free(values);
	free_stacks(&stacks);
	return (0);
}

