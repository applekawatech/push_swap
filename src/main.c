/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:28:08 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/19 13:24:00 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	index_array(values, size);
	init_stacks(&stacks, size);
	while (--i >= 0)
		push(stacks.a, values[i]);
	if (size <= 5)
		sort_small(&stacks);
	else
		radix_sort(&stacks);
	free(values);
	free_stacks(&stacks);
	return (0);
}
