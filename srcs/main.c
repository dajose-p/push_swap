/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 03:43:34 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/07 17:15:32 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	err_check(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static void	free_split(char **nums)
{
	int	i;

	i = 0;
	while (nums[i])
		free(nums[i++]);
	free(nums);
}

static int	ft_strlen_args(char **doublearray)
{
	int	i;

	i = 0;
	if (!doublearray[i])
	{
		free_split(doublearray);
		err_check();
	}
	while (doublearray[i])
		i++;
	return (i);
}

static char	**do_the_thing(char **nums, t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = ft_strlen_args(nums);
	while (i-- > 0)
		insert_el(&stack_a, ft_atoi(nums[i]));
        begin_ops(&stack_a, &stack_b);
        free_stack(stack_a);
        free_stack(stack_b);
	return (nums);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**nums;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		nums = ft_split(argv[1], ' ');
	else
		nums = ++argv;
	if (is_num(nums) && !is_dup(nums) && limit_int(nums))
		nums = do_the_thing(nums, stack_a, stack_b);
	else
	{
		if (argc == 2)
			free_split(nums);
		err_check();
	}
	if (argc == 2)
		free_split(nums);
	return (0);
}
