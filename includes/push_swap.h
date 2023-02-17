/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:50 by yidouiss          #+#    #+#             */
/*   Updated: 2023/02/17 15:57:47 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>

// STRUCTS

typedef	struct s_pos
{
	int	small;
	int	pos;
}				t_pos;

typedef	struct s_stacks
{
	int	*a;
	int	*b;
	int		size;
	int		max;
}				t_stacks;

// FUNCTIONS

int		errors(t_stacks *s);
int		max_int(double s);
int		sa(t_stacks *s, int sw);
int		sb(t_stacks *s, int sw);
int		ss(t_stacks *s);
int		pa(t_stacks *s);
int		pb(t_stacks *s);
int		ra(t_stacks *s, int sw);
int		rb(t_stacks *s, int sw);
int		rr(t_stacks *s);
int		rra(t_stacks *s, int sw);
int		rrb(t_stacks *s, int sw);
int		rrr(t_stacks *s);
int		choose_four(t_stacks *s);
int		choose_five(t_stacks *s);
void	three_sort(t_stacks *s);
int		sort_five(t_stacks *s);
int		symplify(t_stacks *s, int *t);
void	printstack(t_stacks *s);
void	bubblesort(t_stacks *s, int *t);
t_pos	find_smallest(t_stacks *s);

#endif