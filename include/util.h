/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:37:15 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/16 17:42:05 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H
# include "push_swap.h"

/* util_atoi.c */
int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
/* util_char.c */
int		ft_isspace(int c);
int		ft_isdigit(int c);

/* util_int.c */
void	index_array(int *arr, int *sorted, int size);
int		find_index(int *sorted, int size, int value);
int		*copy_array(int *arr, int size);
int		validate_args(int argc, char **argv);
int		is_valid_int(const char *str);
int		check_int_range(const char *str);

/* util_stack.c */
void	init_stacks(t_stacks *stacks, int size);
void	free_stacks(t_stacks *stacks, int *values);
int		is_empty(t_stack *stack);
int		pop_top(t_stack *stack);
int		is_sorted(t_stack *stack);

/* util_stack2.c */
void	push(t_stack *stack, int value);
int		find_min_index(t_stack *a);
void	rotate_to_top(t_stack *a, int idx);
int		is_sorted_raw(int *arr, int size);
int		*check_duplicate(int *sorted, int size);

/* util_str.c */
int		ft_strcmp(const char *s1, const char *s2);
int		is_valid_format(const char *str);

#endif // UTIL_H
