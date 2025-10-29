/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:25:59 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/29 01:48:57 by danjose-         ###   ########.fr       */
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

void	less_numbers(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_b;

	if (st_len(*stack_a) == 2)
		rotate(stack_a, 'a');
}
