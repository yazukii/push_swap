/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/10 18:00:05 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rra(t_stacks *s, int sw)
{
	int	i;
	int	tmp;

	i = s->max - 1;
	if (sw == 0)
		ft_putstr("rra\n");
	tmp = s->a[i];
	while (i > s->max - s->size)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[i] = tmp;
	return (0);
}

int	rrb(t_stacks *s, int sw)
{
	int	i;
	int	tmp;

	i = s->max - 1;
	if (sw == 0)
		ft_putstr("rrb\n");
	tmp = s->b[i];
	while (i > s->max - (s->max - s->size))
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[i] = tmp;
	return (0);
}

int	rrr(t_stacks *s)
{
	ft_putstr("rrr\n");
	rra(s, 1);
	rrb(s, 1);
	return (0);
}
