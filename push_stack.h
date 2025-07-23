/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 15:00:11 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/07/11 15:49:15 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_STACK_H
# define PUSH_STACK_H
# define MAX_SIZE 1000
# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int		*data;
	int		top;
	int		max_size;
}			t_stack;

typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
}			t_stacks;

void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stacks *s);
void		pb(t_stacks *s);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		rrr(t_stack *a, t_stack *b);
void		quick_sort(int a[], int min, int max);
int			*copy_array(int *arr, int size);
int			find_index(int *sorted, int size, int value);
void		index_array(int *arr, int size);
int			ft_atoi(const char *nptr);
int			ft_isdigit(int c);
int			check_int_range(const char *str);
int			is_valid_int(const char *str);
int			validate_args(int argc, char **argv);
int			ft_strcmp(const char *s1, const char *s2);
int			stack_size(t_stack *stack);
void		radix_sort(t_stacks *stacks);
int			is_valid_format(const char *str);
int			stack_max_value(t_stack *stack);
void		push(t_stack *stack, int value);
int			get_index(int *sorted, int size, int value);
int			ft_atoi(const char *nptr);
long		ft_atol(const char *nptr);
int			ft_isspace(int c);
void		init_stacks(t_stacks *stacks, int size);
void		free_stacks(t_stacks *stacks);
int			peek(t_stack *stack);
int			is_empty(t_stack *stack);
int			pop_top(t_stack *stack);
int			is_sorted(t_stack *stack);
int			has_duplicates(char **argv, int argc);
#endif // PUSH_STACK_H
