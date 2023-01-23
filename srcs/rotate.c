/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/23 17:13:24 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ra(t_stacks *s, int sw)
{
	int	i;
	int	tmp;

	i = 0;
	if (sw == 0)
		ft_putstr("ra\n");
	while(i < s->max - s->size)
		i++;
	if (i > s->max - 2)
		return (1);
	tmp = s->a[i];
	while(i < s->max - 1)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	s->a[i] = tmp;
	return (0);
}

int	rb(t_stacks *s, int sw)
{
	int	i;
	int	tmp;

	i = 0;
	if (sw == 0)
		ft_putstr("rb\n");
	while(i < s->max - (s->max - s->size))
		i++;
	if (i > s->max - 2)
		return (1);
	tmp = s->b[i];
	while(i < s->max - 1)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
	s->b[i] = tmp;
	return (0);
}

int	rr(t_stacks *s)
{
	ft_putstr("rr\n");
	ra(s, 1);
	rb(s, 1);
	return (0);
}