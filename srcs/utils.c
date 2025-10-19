/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:50:22 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/19 03:57:16 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char **nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nums[i])
	{
		j = 0;
		while (nums[i][j])
		{
			if (!ft_is_digit(nums[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
