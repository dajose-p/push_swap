/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:53:16 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/01 23:28:23 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	start_ksort(t_stack **stack_a, t_stack **stack_b)
{
	int	threshold;
	int	delta;
	int	n;
	t_stack *head_a;

	n = (st_len(*stack_a));
	threshold = 0;
	delta = (n / 20) + 7;
	head_a = *stack_a;
	while (!is_empty(*stack_a))
	{
		if (head_a->index <= threshold + delta)
		{
			push(stack_b, stack_a, 'b');
			if (head_a->index <= threshold)
				rotate(stack_b, 'b');
			threshold++;
		}
		else
			rotate(stack_a, 'a');
	}	
}
