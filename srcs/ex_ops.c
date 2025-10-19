/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:12:40 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/19 21:17:13 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	begin_ops(t_stack_a *stack_a)
{
	t_stack_a	*head;

	head = stack_a;
	while (head)
	{
		ft_printf("%i\n", head->content);
		head = head->next;
	}
}
