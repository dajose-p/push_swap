/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:20:40 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/20 21:27:26 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	insert_in_a(t_stack_a **stack_a, int num)
{
	t_stack_a	*new;
	new = malloc(sizeof(t_stack_a));
	new->content = num;
	new->next = *stack_a;
	*stack_a = new;
}

void	insert_in_b(t_stack_b **stack_b, int num)
{
	t_stack_b	*new;
	new = malloc(sizeof(t_stack_b));
	new->content = num;
	new->next = *stack_b;
	*stack_b = new;
}

void	free_list(t_stack_a *stack_a)
{
	t_stack_a	*head;

	head = stack_a;
	while (stack_a)
	{
		head = stack_a;
		stack_a = stack_a->next; 
		free(head);
	}
}
