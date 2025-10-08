/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:58:19 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/06 16:26:32 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
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


int			*copy_array(int *arr, int size);
int			find_index(int *sorted, int size, int value);
void		index_array(int *arr, int size);
int			ft_isdigit(int c);
int			check_int_range(const char *str);
int			is_valid_int(const char *str);
int			validate_args(int argc, char **argv);
int			ft_strcmp(const char *s1, const char *s2);
int			stack_size(t_stack *stack);
int			is_valid_format(const char *str);
int			stack_max_value(t_stack *stack);
void		push(t_stack *stack, int value);
int			get_index(int *sorted, int size, int value);
int			ft_isspace(int c);
void		init_stacks(t_stacks *stacks, int size);
void		free_stacks(t_stacks *stacks);
int			peek(t_stack *stack);
int			is_empty(t_stack *stack);
int			pop_top(t_stack *stack);
int			is_sorted(t_stack *stack);
void		sort_len_3(t_stacks *s);
#endif // PUSH_STACK_H
