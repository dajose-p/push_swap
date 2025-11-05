/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops_2_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:47:34 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/05 01:40:07 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

void	print_stack(t_stack *stack, char st_name)
{
	t_stack	*head;

	head = stack;
	while (head)
	{
		ft_printf("Stack %c:%i\n", st_name, head->content);
		head = head->next;
	}
	ft_printf("\n");
}

void	del_node(t_stack **node)
{
	t_stack	*temp;

	if (is_empty(*node))
		return;
	temp = *node;
	*node = (*node)->next;
	free(temp);
}

int	check_order(t_stack *stack)
{
	t_stack *head;

	head = stack;
	while (head->next)
	{
		if (head->content > head->next->content)
			return (1);
		head = head->next;
	}
	return (0);
}
