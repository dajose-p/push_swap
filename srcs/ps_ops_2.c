/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:19:32 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/29 01:36:04 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_rotate(t_stack **stack_a, char letter_st)
{
	int	len;
	int	i;

	len = st_len(*stack_a) - 1;
	i = 0;
	while (i < len)
	{
		rotate(stack_a, '0');
		i++;
	}
	if (letter_st != '0')
		ft_printf("rr%c\n", letter_st);
}

void	reverse_rotate_a_lot(t_stack **stack_one, t_stack **stack_two)
{
	reverse_rotate(stack_one, '0');
	reverse_rotate(stack_two, '0');
	ft_printf("rrr\n");
}
