/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:31:55 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/28 20:24:16 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from)
{
	if (is_empty(*stack_from))
		return ;
	lstadd_front(stack_to, stack_from);
	del_node(stack_from);
}

void	swap(t_stack **stack)
{
	int	temp;
	t_stack	*head;

	head = *stack;
	if (st_len(head) < 2)
		return ;
	temp = head->content;
	head->content = head->next->content;
	head->next->content = temp;
	*stack = head;
}

void	swap_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	swap(stack_one);
	swap(stack_two);
}

void	rotate(t_stack **stack)
{
	int	temp;
	t_stack	*head;

	head = *stack;
	temp = head->content;
	while (head->next)
	{
		temp = head->content;
		head->content = head->next->content;
		head->next->content = temp;
		head = head->next;
	}
}

void	rotate_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	rotate(stack_one);
	rotate(stack_two);
}
