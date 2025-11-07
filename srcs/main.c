/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:43:34 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/06 21:01:12 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ft_strlen_args(char **doublearray)
{
	int	i;

	i = 0;
	while (doublearray[i])
		i++;
	return (i);
}

static void	full_prog(t_stack *stack_a, t_stack *stack_b)
{
	begin_ops(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**nums;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		nums = ft_split(argv[1], ' ');
	}
	else
		nums = ++argv;
	i = ft_strlen_args(nums);
	if (is_num(nums) && !is_dup(nums) && limit_int(nums))
	{
		while (i-- > 0)
			insert_el(&stack_a, ft_atoi(nums[i]));
		full_prog(stack_a, stack_b);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
