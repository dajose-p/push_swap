/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:14:09 by danjose-          #+#    #+#             */
/*   Updated: 2025/11/03 20:13:53 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct	s_stack
{
	int	content;
	int	index;
	struct s_stack	*next;
}	t_stack;

int	is_num(char **nums);
int     is_dup(char **nums);
int	limit_int(char **nums);
int     st_len(t_stack *stack);
void    begin_ops(t_stack **stack, t_stack **stack_b);
void    insert_el(t_stack **stack, int num);
void	free_stack(t_stack *stack);
void    lstadd_front(t_stack **stack_to, t_stack **stack_from);
void    push(t_stack **stack_to, t_stack **stack_from, char letter_to);
int	is_empty(t_stack *stack);
void    print_stack(t_stack *stack, char st_name);
void	del_node(t_stack **node);
void    swap(t_stack **stack, char letter_st);
void    swap_a_lot(t_stack **stack_one, t_stack **stack_two);
void    rotate(t_stack **stack, char letter_st);
void    rotate_a_lot(t_stack **stack_one, t_stack **stack_two);
void    reverse_rotate(t_stack **stack_a, char letter_st);
void    reverse_rotate_a_lot(t_stack **stack_one, t_stack **stack_two);
int     check_order(t_stack *stack);
void	small_numbers(t_stack **stack_a, t_stack **stack_b);
void	two_numbers(t_stack **stack_a);
void	three_numbers(t_stack **stack_a);
void    four_numbers(t_stack **stack_a, t_stack **stack_b);
void	five_numbers(t_stack **stack_a, t_stack **stack_b);
void	start_ksort(t_stack **stack_a, t_stack **stack_b);
void	back_to_a(t_stack **stack_a, t_stack **stack_b);
int	min_num(t_stack *stack);
int	max_num(t_stack *stack);

#endif
