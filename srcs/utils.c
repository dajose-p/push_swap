/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:50:22 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/19 18:53:51 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	is_in_arg(char *num, char **a_nums, int pos)
{
	int	i;

	i = 1;
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

	i = 1;
	j = 0;
	while (nums[i])
	{
		j = 0;
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

	i = 1;
	while(nums[i])
	{
		if (is_in_arg(nums[i], nums, i))
			return (1);
		i++;
	}
	return (0);
}
