/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ops_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:37:52 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/20 20:34:22 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack_a       *new_a(int num)
{
        t_list  *new;

        new = malloc(sizeof(t_stack_a));
        if (!new)
                return (NULL);
        new->content = num;
        new->next = NULL;
}

t_stack_b	*new_b(int num)
{
	t_list	*new;
	new = malloc(sizeof(t_stack_b));
	if (!new)
		return (NULL);
	new->content = num;
	new->next = NULL;
}
