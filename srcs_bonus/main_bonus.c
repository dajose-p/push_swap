/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:43:34 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/05 00:51:13 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack *stack_b;
	int	i;

	stack_a = NULL;
	stack_b = NULL;
	i = argc - 1;
	if (argc < 2)
		return (0);
	if (is_num(argv) && !is_dup(argv) && limit_int(argv))
	{
		while (i >= 1)
			insert_el(&stack_a, ft_atoi(argv[i--]));
		begin_check(&stack_a, &stack_b);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	else
	{
		ft_printf("Error\n");
		exit(1);
	}	
	return (0);
}
