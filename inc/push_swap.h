/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:14:09 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/22 00:50:16 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct	s_stack
{
	int	content;
	struct s_stack	*next;
}	t_stack;

int	is_num(char **nums);
int     is_dup(char **nums);
int	limit_int(char **nums);
int     st_len(t_stack *stack);
void    begin_ops(t_stack *stack);
void    insert_el(t_stack **stack, int num);
void	free_stack(t_stack *stack);
void    lstadd_front(t_stack **stack_dest, t_stack *stack_src);
void    push(t_stack *stack_to, t_stack *stack_from);
int	is_empty(t_stack *stack);
void    print_stack(t_stack *stack, char st_name);

#endif
