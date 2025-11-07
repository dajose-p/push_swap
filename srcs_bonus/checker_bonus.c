/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:53:05 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/06 20:39:10 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int	check_op(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if ((ft_strncmp(line, "sa\n", 3) == 0))
		return (swap(stack_a));
	else if ((ft_strncmp(line, "sb\n", 3) == 0))
		return (swap(stack_b));
	else if ((ft_strncmp(line, "ss\n", 3) == 0))
		return (swap_a_lot(stack_a, stack_b));
	else if ((ft_strncmp(line, "pa\n", 3) == 0))
		return (push(stack_a, stack_b));
	else if ((ft_strncmp(line, "pb\n", 3)) == 0)
		return (push(stack_b, stack_a));
	else if ((ft_strncmp(line, "rra\n", 4) == 0))
		return (reverse_rotate(stack_a));
	else if ((ft_strncmp(line, "rrb\n", 4) == 0))
		return (reverse_rotate(stack_b));
	else if ((ft_strncmp(line, "rrr\n", 4) == 0))
		return (reverse_rotate_a_lot(stack_a, stack_b));
	else if ((ft_strncmp(line, "ra\n", 3) == 0))
		return (rotate(stack_a));
	else if ((ft_strncmp(line, "rb\n", 3) == 0))
		return (rotate(stack_b));
	else if ((ft_strncmp(line, "rr\n", 3) == 0))
		return (rotate_a_lot(stack_a, stack_b));
	return (1);
}

void	begin_check(t_stack **stack_a, t_stack **stack_b)
{
	int		res;
	char	*line;

	res = 0;
	line = get_next_line(0);
	while (line)
	{
		if (line[0] == '\n' || line[0] == '\0')
		{
			free(line);
			break ;
		}
		else if (check_op(stack_a, stack_b, line))
			res = 1;
		free(line);
		line = get_next_line(0);
	}
	if (res == 0 && check_order(*stack_a) && (*stack_b) == NULL)
		ft_putstr_fd("OK\n", 1);
	else if (res == 0 && !check_order(*stack_a))
		ft_putstr_fd("KO\n", 1);
	else if (res == 1)
		write(2, "Error\n", 6);
	else
		ft_putstr_fd("KO\n", 1);
}
