/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:31:55 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/06 20:31:25 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int	push(t_stack **stack_to, t_stack **stack_from)
{
	if (is_empty(*stack_from))
		return (0);
	lstadd_front(stack_to, stack_from);
	del_node(stack_from);
	return (0);
}

int	swap(t_stack **stack)
{
	int		temp;
	int		temp_in;
	t_stack	*head;

	head = *stack;
	if (st_len(head) < 2)
		return (0);
	temp = head->content;
	temp_in = head->index;
	head->content = head->next->content;
	head->index = head->next->index;
	head->next->content = temp;
	head->next->index = temp_in;
	*stack = head;
	return (0);
}

int	swap_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	swap(stack_one);
	swap(stack_two);
	return (0);
}

int	rotate(t_stack **stack)
{
	int		temp;
	int		temp_in;
	t_stack	*head;

	if (is_empty(*stack) || !(*stack)->next)
		return (0);
	head = *stack;
	temp = head->content;
	temp_in = head->index;
	while (head->next)
	{
		temp = head->content;
		temp_in = head->index;
		head->content = head->next->content;
		head->index = head->next->index;
		head->next->content = temp;
		head->next->index = temp_in;
		head = head->next;
	}
	return (0);
}

int	rotate_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	rotate(stack_one);
	rotate(stack_two);
	return (0);
}
