/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:53:05 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/29 01:48:16 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    begin_ops(t_stack **stack, t_stack **stack_b)
{
	(void)stack_b;
	if (check_order(*stack))
		ft_printf("List is already ordered\n");
	else
	{
		if (st_len(*stack) == 2)
			less_numbers(stack, stack_b);
	}
}
