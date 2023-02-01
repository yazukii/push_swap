/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:16:59 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/26 16:16:59 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	choose_five(t_stacks *s)
{
	t_pos pos;

	pos = find_smallest(s);
	if (pos.pos == 1)
		ra(s, 0);
	else if (pos.pos == 2)
	{
		ra(s, 0);
		ra(s, 0);
	}
	else if (pos.pos == 3)
	{
		rra(s, 0);
		rra(s, 0);
	}
	else if (pos.pos == 4)
		rra(s, 0);
	pb(s);
	return (0);
}

int	choose_four(t_stacks *s)
{
	t_pos pos;

	pos = find_smallest(s);
	if (pos.pos == 2)
		ra(s, 0);
	else if (pos.pos == 3)
	{
		ra(s, 0);
		ra(s, 0);
	}
	else if (pos.pos == 4)
		rra(s, 0);
	pb(s);
	return (0);
}
