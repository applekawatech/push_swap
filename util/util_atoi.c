/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:42:53 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/10/08 16:42:57 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int is_valid_format(const char *str)
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
static int	check_int_range(const char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > FT_INT_MAX || num < FT_INT_MIN)
		return (0);
	return (1);
}

static int	is_valid_int(const char *str)
{
	if (!is_valid_format(str))
		return (0);
	if (!check_int_range(str))
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	num;
	int		type;

	i = 0;
	num = 0;
	type = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			type = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		if (type == 1 && num > FT_INT_MAX)
			return (FT_INT_MAX);
		if (type == -1 && num * type < FT_INT_MIN)
			return (FT_INT_MIN);
		i++;
	}
	return ((int)(num * type));
}

long	ft_atol(const char *s)
{
	int		i;
	long	res;
	long	coeff;

	i = 0;
	res = 0;
	coeff = 1;
	while (s[i] && ft_isspace(s[i]))
		i++;
	if (!s[i])
		return (0);
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
	{
		coeff = -1;
		i++;
	}
	while (s[i] && ft_isdigit(s[i]))
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * coeff);
}
