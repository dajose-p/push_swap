/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:12:40 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/26 22:28:40 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	begin_ops(t_stack *stack)
{
	t_stack	*stack_b;

	stack_b = NULL;
	push(&stack_b, &stack);
	push(&stack_b, &stack);
	ft_printf("PUSH OPS\n");
	print_stack(stack, 'a');
	print_stack(stack_b, 'b');
	ft_printf("SWAP_OPS\n");
	swap(&stack);
	print_stack(stack, 'a');
	ft_printf("SWAP_SWAP_OPS\n");
	swap_a_lot(&stack, &stack_b);
	print_stack(stack, 'a');
	print_stack(stack_b, 'b');
	ft_printf("ROTATE_OPS\n");
	rotate(&stack);
	print_stack(stack, 'a');
	ft_printf("ROTATE_RO(TETA)\n");
	rotate_a_lot(&stack, &stack_b);
	print_stack(stack, 'a');
	print_stack(stack_b, 'b');
        ft_printf("REV_ROTATE_OPS\n");
        reverse_rotate(&stack);
        print_stack(stack, 'a');
	ft_printf("REV_ROTATE_RO(TETA)\n");
        reverse_rotate_a_lot(&stack, &stack_b);
        print_stack(stack, 'a');
        print_stack(stack_b, 'b');
}
