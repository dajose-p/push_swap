/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:31:55 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 22:05:32 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from)
{
	if (is_empty(*stack_from))
		return ;
	lstadd_front(stack_to, *stack_from);
	del_node(stack_from);
}
