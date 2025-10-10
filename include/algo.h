/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:37:06 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/10 16:44:57 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H
# include "push_swap.h"

typedef struct s_radix
{
	int	i;
	int	j;
	int	size;
	int	max_bits;
}			t_radix;

typedef struct s_five
{
	int a;
	int b;
	int i;
}	t_five;

/* quick_sort.c */
void	quick_sort(int a[], int min, int max);
/* radix_sort.c */
void	radix_sort(t_stacks *stacks);
/* sort_3_5.c */
void	sort_small(t_stacks *s);
#endif // ALGO_H
