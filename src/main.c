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

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	t_main		main;

	if (!validate_args(argc, argv))
		return (write(2, "Error\n", 6), 1);
	main.size = argc - 1;
	main.values = malloc(sizeof(int) * main.size);
	if (!main.values)
		return (write(2, "Malloc Error\n", 13), 1);
	main.i = -1;
	while (++main.i < main.size)
		main.values[main.i] = ft_atoi(argv[main.i + 1]);
	if (is_sorted_raw(main.values, main.size))
		return (free(main.values), 0);
	index_array(main.values, main.size);
	init_stacks(&stacks, main.size);
	while (--main.i >= 0)
		push(stacks.a, main.values[main.i]);
	if (main.size <= 5)
		sort_small(&stacks);
	else
		radix_sort(&stacks);
	free(main.values);
	free_stacks(&stacks);
	return (0);
}
