/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:14:09 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/05 01:07:14 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

int					is_num(char **nums);
int					is_dup(char **nums);
int					limit_int(char **nums);
int					st_len(t_stack *stack);
void				begin_check(t_stack **stack, t_stack **stack_b);
void				insert_el(t_stack **stack, int num);
void				free_stack(t_stack *stack);
void				lstadd_front(t_stack **stack_to, t_stack **stack_from);
int					push(t_stack **stack_to, t_stack **stack_from);
int					is_empty(t_stack *stack);
void				del_node(t_stack **node);
int					swap(t_stack **stack);
int					swap_a_lot(t_stack **stack_one, t_stack **stack_two);
int					rotate(t_stack **stack);
int					rotate_a_lot(t_stack **stack_one, t_stack **stack_two);
int					reverse_rotate(t_stack **stack_a);
int					reverse_rotate_a_lot(t_stack **stack_one,
						t_stack **stack_two);
int					check_order(t_stack *stack);
int					check_op(t_stack **stack_a, t_stack **stack_b, char *line);

#endif
