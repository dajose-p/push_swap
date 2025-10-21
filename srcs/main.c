/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:43:34 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 00:44:21 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	int	i;

	stack_a = NULL;
	i = argc - 1;
	if (argc < 2)
		return (0);
	if (is_num(argv) && !is_dup(argv) && limit_int(argv))
	{
		while (i >= 1)
			insert_el(&stack_a, ft_atoi(argv[i--]));
		begin_ops(stack_a);
		free_stack(stack_a);
	}
	else
	{
		ft_printf("Error\n");
		exit(1);
	}	
	return (0);
}
