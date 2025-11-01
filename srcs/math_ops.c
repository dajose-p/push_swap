/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:24:24 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/01 22:58:23 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	min_num(t_stack *stack)
{
	t_stack *head;
	int	min;

	head = stack;
	min = head->content;
	while (head)
	{
		if (min > head->content)
			min = head->content;
		head = head->next;
	}
	return (min);
}

int	max_num(t_stack *stack)
{
	t_stack *head;
        int     max;

        head = stack;
        max = head->content;
        while (head)
        {
                if (max > head->content)
                        max = head->content;
                head = head->next;
        }
        return (max);
}
