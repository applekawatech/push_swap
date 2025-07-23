/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretreatment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:49:34 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/07/11 15:48:54 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_stack.h"

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
	if (has_duplicates(argv, argc))
		return (0);
	return (1);
}

int	has_duplicates(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
