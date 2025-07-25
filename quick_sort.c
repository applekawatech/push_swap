/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:40:45 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/12 13:28:03 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"
#include <stdio.h>

void	quick_sort(int a[], int min, int max)
{
	int	l;
	int	r;
	int	m;
	int	tmp;

	l = min;
	r = max;
	m = a[(l + r) / 2];
	while (l <= r)
	{
		while (a[l] < m)
			l++;
		while (a[r] > m)
			r--;
		if (l <= r)
		{
			tmp = a[l];
			a[l++] = a[r];
			a[r--] = tmp;
		}
	}
	if (min < r)
		quick_sort(a, min, r);
	if (l < max)
		quick_sort(a, l, max);
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
