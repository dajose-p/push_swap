/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:19:32 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/26 22:27:47 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_rotate(t_stack **stack_a)
{
	int	len;
	int	i;

	len = st_len(*stack_a) - 1;
	i = 0;
	while (i < len)
	{
		rotate(stack_a);
		i++;
	}
}

void	reverse_rotate_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	reverse_rotate(stack_one);
	reverse_rotate(stack_two);
}
