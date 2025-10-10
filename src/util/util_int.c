/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:53:58 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/10 16:38:04 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void	index_array(int *arr, int size)
{
	int	*sorted;
	int	i;

	sorted = copy_array(arr, size);
	if (!sorted)
		return ;
	quick_sort(sorted, 0, size - 1);
	i = 0;
	while (i < size)
	{
		arr[i] = find_index(sorted, size, arr[i]);
		i++;
	}
	free(sorted);
}

int	find_index(int *sorted, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

int	*copy_array(int *arr, int size)
{
	int	*copy;
	int	i;

	copy = malloc(sizeof(int) * size);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = arr[i];
		i++;
	}
	return (copy);
}

int	is_valid_int(const char *str)
{
	if (!is_valid_format(str))
		return (0);
	if (!check_int_range(str))
		return (0);
	return (1);
}

int	check_int_range(const char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > FT_INT_MAX || num < FT_INT_MIN)
		return (0);
	return (1);
}
