/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:53:05 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/31 00:46:57 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    begin_ops(t_stack **stack, t_stack **stack_b)
{
	(void)stack_b;
	if (check_order(*stack))
		return ;
	else
	{
		if (st_len(*stack) == 2)
			two_numbers(stack);
		else if (st_len(*stack) == 3)
                        three_numbers(stack);
		else if (st_len(*stack) == 4)
                        four_numbers(stack, stack_b);
		else if (st_len(*stack) == 5)
			five_numbers(stack, stack_b);
	}
}
