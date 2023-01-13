/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:50 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/13 15:09:54 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>

// STRUCTS

typedef struct	s_pos
{
	int	small;
	int	pos;
}				t_pos;

// FUNCTIONS

int		sa(int *a, int size, int sw);
int		sb(int *b, int size, int sw);
int		ss(int *a, int *b, int size);
int		pa(int *a, int *b, int size);
int		pb(int *a, int *b, int size);
int		ra(int *a, int size, int sw);
int		rb(int *b, int size, int sw);
int		rr(int *a, int *b, int size);
int		rra(int *a, int size, int sw);
int		rrb(int *b, int size, int sw);
int		rrr(int *a, int *b, int size);


#endif