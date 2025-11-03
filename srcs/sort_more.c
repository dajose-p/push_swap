/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:53:16 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/03 20:38:08 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	find_max_index(t_stack *stack)
{
	int	max;
	t_stack	*head;

	max = stack->index;
	head = stack;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	return (max);
}

int	pos_index(t_stack *stack, int index)
{
	t_stack *head;
	int	i;

	i = 0;
	head = stack;
	while (head)
	{
		if (head->index == index)
			return (i);
		i++;
		head = head->next;
	}
	return (i);
}

void	start_ksort(t_stack **stack_a, t_stack **stack_b)
{
	int	threshold;
	int	delta;
	int	n;

	n = (st_len(*stack_a));
	threshold = 0;
	delta = n / 20 + 7;
	while (!is_empty(*stack_a))
	{
		if ((*stack_a)->index <= threshold + delta)
		{
			push(stack_b, stack_a, 'b');
			if ((*stack_b)->index <= threshold)
				rotate(stack_b, 'b');
			threshold++;
		}
		else
			rotate(stack_a, 'a');
	}	
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int	max_index;
	int	pos;

	max_index = 0;
	pos = 0;
	while (!is_empty(*stack_b))
	{
		max_index = find_max_index(*stack_b);
		pos = pos_index(*stack_b, max_index);
		if (pos <= st_len(*stack_b) / 2)
		{
			while ((*stack_b)->index != max_index)
				rotate(stack_b, 'b');
		}
		else
		{
			while ((*stack_b)->index != max_index)
				reverse_rotate(stack_b, 'b');
		}
		push(stack_a, stack_b, 'a');
	}
}
