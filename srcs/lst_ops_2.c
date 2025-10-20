/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:37:52 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/20 22:45:24 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	lstadd_front_a(t_stack_a **stack_a, t_stack_a *stack_b)
{
	stack_b->next = *stack_a;
	*stack_a = stack_b;
}

void	lstadd_front_b(t_stack_b **stack_b, t_stack_b *stack_a)
{
	stack_a->next = *stack_b;
	*stack_b = stack_a;
}
