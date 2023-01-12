/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yani <yani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:50 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/12 20:13:21 by yani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>

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