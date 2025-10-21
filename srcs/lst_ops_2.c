/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:47:34 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 00:54:22 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_stack(t_stack *stack, char st_name)
{
	t_stack	*head;

	head = stack;
	while (head)
	{
		ft_printf("Stack %c:%i", st_name, head->content);
		head = head->next;
	}
	ft_printf("\n");
}
