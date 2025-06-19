/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretreatment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:49:34 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/13 15:36:48 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

int	is_valid_format(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
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

int	is_valid_int(const char *str)
{
	if (!is_valid_format(str))
		return (0);
	if (!check_int_range(str))
		return (0);
	return (1);
}

int	validate_args(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (!is_valid_int(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	parse_args(int argc, char **argv, t_stack **a)
{
	int	i;
	int	num;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_int(argv[i]))
			return (0);
		num = ft_atoi(argv[i]);
		push(*a, num);
		i++;
	}
	return (1);
}
