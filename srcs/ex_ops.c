/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:12:40 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 22:08:58 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	begin_ops(t_stack *stack)
{
	t_stack	*stack_b;

	stack_b = NULL;
	push(&stack_b, &stack);
	push(&stack_b, &stack);
	print_stack(stack, 'a');
	print_stack(stack_b, 'b');
	free_stack(stack_b);
}
