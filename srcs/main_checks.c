/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:25:59 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/31 00:49:20 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_order(t_stack *stack)
{
	t_stack	*head;

	head = stack;
	while (head->next)
	{
		if ((head->content) < (head->next->content))
			head = head->next;
		else
			return (0);
	}
	return (1);
}

void	two_numbers(t_stack **stack_a)
{
	if (st_len(*stack_a) == 2)
		swap(stack_a, 'a');
}

void	three_numbers(t_stack **stack_a)
{
	while (!check_order(*stack_a))
	{
		if (((*stack_a)->content > (*stack_a)->next->content)
			&& ((*stack_a)->content > ((*stack_a)->next->next->content)))
			rotate(stack_a, 'a');
		else if (((*stack_a)->content > (*stack_a)->next->content)
			&& ((*stack_a)->content < ((*stack_a)->next->next->content)))
			swap(stack_a, 'a');
		else
			swap(stack_a, 'a');
	}
}

void	four_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*head;

	i = 0;
	head = *stack_a;
	while ((min_num(*stack_a) != head->content) && head)
	{
		head = head->next;
		i++;
	}
	while (!check_order(*stack_a))
	{
		if (i < 2 && i != 0)
			rotate(stack_a, 'a');
		else if (i > 2 && i != 0)
			reverse_rotate(stack_a, 'a');
		else if (i == 2)
		{
			reverse_rotate(stack_a, 'a');
			reverse_rotate(stack_a, 'a');
		}
		push(stack_b, stack_a, 'b');
		three_numbers(stack_a);
		push(stack_a, stack_b, 'a');
	}
}
