/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:31:55 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 00:35:50 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_stack *stack_a, t_stack *stack_b)
{
	if (is_empty(stack_b))
		return ;
	lstadd_front(&stack_a, stack_b);
}
