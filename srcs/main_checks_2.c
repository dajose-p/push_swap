/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checks_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 02:12:00 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/05 02:12:33 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	move_min_to_top(t_stack **stack_a, int i, int min)
{
	if (i <= 3 && i != 0)
		while ((*stack_a)->content != min)
			rotate(stack_a, 'a');
	else if (i >= 3 && i != 0)
		while ((*stack_a)->content != min)
			reverse_rotate(stack_a, 'a');
}

static int	get_min_index(t_stack *stack, int min)
{
	int		i;
	t_stack	*head;

	i = 0;
	head = stack;
	while (head && head->content != min)
	{
		head = head->next;
		i++;
	}
	return (i);
}

void	five_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	i;

	while (!check_order(*stack_a))
	{
		min = min_num(*stack_a);
		i = get_min_index(*stack_a, min);
		move_min_to_top(stack_a, i, min);
		push(stack_b, stack_a, 'b');
		four_numbers(stack_a, stack_b);
		push(stack_a, stack_b, 'a');
	}
}
