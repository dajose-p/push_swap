/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:31:55 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/03 19:57:44 by danjose-         ###   ########.fr       */
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
	int	temp_in;
	t_stack	*head;

	head = *stack;
	if (st_len(head) < 2)
		return ;
	temp = head->content;
	temp_in = head->index;
	head->content = head->next->content;
	head->index = head->next->index;
	head->next->content = temp;
	head->next->index = temp_in;
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
	int	temp_in;
	t_stack	*head;

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
	if (letter_st != '0')
		ft_printf("r%c\n", letter_st);
}

void	rotate_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	rotate(stack_one, '0');
	rotate(stack_two, '0');
	ft_printf("rr\n");
}
