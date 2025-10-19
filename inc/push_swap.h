/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:14:09 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/19 21:20:19 by danjose-         ###   ########.fr       */
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
t_stack_a       *pa(int num);
int     sta_len(t_stack_a *stack_a);
int     stb_len(t_stack_b *stack_b);
void    begin_ops(t_stack_a *stack_a);

#endif
