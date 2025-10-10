/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:13:35 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/10 17:13:41 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

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

typedef struct s_sort5
{
	int		*data;
	int		top;
	int		max_size;
}			t_sort5;

typedef struct s_radix
{
	int		i;
	int		j;
	int		size;
	int		max_bits;
}			t_radix;

typedef struct s_five
{
	int		a;
	int		b;
	int		i;
}			t_five;

#endif // STRUCT_H
