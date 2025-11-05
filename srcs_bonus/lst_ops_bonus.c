/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:47:12 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/04 19:37:26 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int	st_len(t_stack *stack)
{
	int	i;
	t_stack	*head;

	i = 0;
	head = stack;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void    lstadd_front(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*new;
	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->content = (*stack_from)->content;
	new->index = (*stack_from)->index;
	new->next = *stack_to;
	*stack_to = new;
}

void    insert_el(t_stack **stack, int num)
{
        t_stack *new;
        new = malloc(sizeof(t_stack));
	if (!new)
		return ;
        new->content = num;
        new->next = *stack;
        *stack = new;
}

void    free_stack(t_stack *stack)
{
        t_stack *head;

        head = stack;
        while (stack)
        {
                head = stack;
                stack = stack->next;
                free(head);
        }
}

int	is_empty(t_stack *stack)
{
	return (stack == NULL);
}
