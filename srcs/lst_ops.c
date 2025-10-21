/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:47:12 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 00:44:13 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	st_len(t_stack *stack)
{
	int	i;
	t_stack	*head;

	head = stack;
	while (stack)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void    lstadd_front(t_stack **stack_dest, t_stack *stack_src)
{
        stack_src->next = *stack_dest;
        *stack_dest = stack_src;
}

void    insert_el(t_stack **stack, int num)
{
        t_stack *new;
        new = malloc(sizeof(t_stack));
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
