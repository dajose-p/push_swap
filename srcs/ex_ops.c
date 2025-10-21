/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:12:40 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 00:41:01 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	begin_ops(t_stack *stack)
{
	t_stack	*head;

	head = stack;
	while (head)
	{
		ft_printf("%i\n", head->content);
		head = head->next;
	}
}
