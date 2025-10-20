/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:14:09 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/20 22:46:53 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct	s_stack_a
{
	int	content;
	struct s_stack_a	*next;
}	t_stack_a;

typedef struct	s_stack_b
{
	int	content;
	struct s_stack_b	*next;
}	t_stack_b;

int	is_num(char **nums);
int     is_dup(char **nums);
int	limit_int(char **nums);
int     sta_len(t_stack_a *stack_a);
int     stb_len(t_stack_b *stack_b);
void    begin_ops(t_stack_a *stack_a);
void    insert_in_a(t_stack_a **stack_a, int num);
t_stack_a       *new_a(int num);
t_stack_b       *new_b(int num);
void	free_list(t_stack_a *stack_a);
void    lstadd_front_a(t_stack_a **stack_a, t_stack_a *stack_b);
void    lstadd_front_b(t_stack_b **stack_b, t_stack_b *stack_a);
void    pa(t_stack_a *stack_a, t_stack_b *stack_b);
void    pb(t_stack_b *stack_b, t_stack_a *stack_a);

#endif
