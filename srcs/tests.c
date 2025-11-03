/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:53:05 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/03 20:13:19 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	set_indexes(t_stack *stack)
{
	int	rank;
	t_stack *comp;
	t_stack *head;

	rank = 0;
	head = stack;
	while (head)
	{
		rank = 0;
		comp = stack;
		while (comp)
		{
			if (head->content > comp->content)
				rank++;
			comp = comp->next;
		}
		head->index = rank;
		head = head->next;
	}
}

void	small_numbers(t_stack **stack_a, t_stack **stack_b)
{
	if (st_len(*stack_a) == 2)
                two_numbers(stack_a);
	if (st_len(*stack_a) == 3)
                three_numbers(stack_a);
	if (st_len(*stack_a) == 4)
                four_numbers(stack_a, stack_b);
	if (st_len(*stack_a) == 5)
                five_numbers(stack_a, stack_b);
}

void    begin_ops(t_stack **stack, t_stack **stack_b)
{
	(void)stack_b;
	if (check_order(*stack))
		return ;
	else
	{
		if (st_len(*stack) >= 2 && st_len(*stack) <= 5)
			small_numbers(stack, stack_b);
		else
		{			
			set_indexes(*stack);
			start_ksort(stack, stack_b);
			back_to_a(stack, stack_b);
		}
	}
}
