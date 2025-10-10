/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:21:53 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/06 16:21:53 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef OPS_H
# define OPS_H

# include "push_swap.h"

/* stack_swap.c */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
/* stack_push.c */
void	pa(t_stacks *s);
void	pb(t_stacks *s);
/* stack_rotate.c */
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
/* stack_reverse_rotate.c */
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif