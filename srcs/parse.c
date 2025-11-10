/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:50:22 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/10 17:48:22 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	num_overflow(char *num)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	if (*num == '-' || *num == '+')
	{
		if (*num == '-')
			sign = -1;
		num++;
	}
	while (ft_isdigit(*num))
	{
		if (sign == 1 && res > (INT_MAX - (*num - '0')) / 10)
			return (1);
		if (sign == -1 && res < (INT_MIN + (*num - '0') + 1) / 10)
			return (1);
		res = res * 10 + (sign * (*num - '0'));
		num++;
	}
	return (0);
}

static int	is_in_arg(char *num, char **a_nums, int pos)
{
	int	i;

	i = 0;
	while (a_nums[i])
	{
		if ((i != pos) && (ft_strncmp(num, a_nums[i], ft_strlen(num)) == 0)
			&& ft_strlen(num) == ft_strlen(a_nums[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_num(char **nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nums[i])
	{
		j = 0;
		if (nums[i][j] == '-' || nums[i][j] == '+')
			j++;
		while (nums[i][j])
		{
			if (!ft_isdigit(nums[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_dup(char **nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		if (is_in_arg(nums[i], nums, i))
			return (1);
		i++;
	}
	return (0);
}

int	limit_int(char **nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		if (num_overflow(nums[i]))
			return (0);
		i++;
	}
	return (1);
}
