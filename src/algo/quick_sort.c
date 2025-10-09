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

#include "../../include/push_swap.h"
#include <stdio.h>
#include <stdlib.h>


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

