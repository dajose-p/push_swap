/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:47:12 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/19 21:37:45 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	sta_len(t_stack_a *stack_a)
{
	int	i;
	t_stack_a	*head;

	head = stack_a;
	while (stack_a)
	{
		i++;
		head = head->next;
	}
	return (i);
}

int     stb_len(t_stack_b *stack_b)
{       
        int     i;
        t_stack_b       *head;

        head = stack_b;
        while (stack_b)
        {
                i++;
                head = head->next;
        }
        return (i);
}

int	is_empty_a(t_stack_a *stack_a)
{
	return (stack_a == NULL);
}

int	is_empty_b(t_stack_b *stack_b)
{
	return (stack_b == NULL);
}
