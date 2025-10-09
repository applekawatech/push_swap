/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:37:06 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/08 15:07:59 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H
# include "push_swap.h"

/* quick_sort.c */
void	quick_sort(int a[], int min, int max);
/* radix_sort.c */
void	radix_sort(t_stacks *stacks);
/* sort_3_5.c */
void	sort_len_3(t_stacks *s);
#endif // ALGO_H
