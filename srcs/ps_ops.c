/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:31:55 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/29 01:34:59 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from, char letter_to)
{
	if (is_empty(*stack_from))
		return ;
	lstadd_front(stack_to, stack_from);
	del_node(stack_from);
	ft_printf("p%c\n", letter_to);
}

void	swap(t_stack **stack, char letter_st)
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
	if (letter_st != 0)
		ft_printf("s%c\n", letter_st);
}

void	swap_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	swap(stack_one, '0');
	swap(stack_two, '0');
	ft_printf("ss\n");
}

void	rotate(t_stack **stack, char letter_st)
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
	if (letter_st != '0')
		ft_printf("r%c\n", letter_st);
}

void	rotate_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	rotate(stack_one, '0');
	rotate(stack_two, '0');
	ft_printf("rr\n");
}
