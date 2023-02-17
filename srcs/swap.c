/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/02/17 15:32:35 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sa(t_stacks *s, int sw)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < s->max - s->size)
		i++;
	if (sw == 0)
		ft_putstr("sa\n");
	if (i > s->size - 2)
		return (1);
	tmp = s->a[i];
	s->a[i] = s->a[i + 1];
	s->a[i + 1] = tmp;
	return (0);
}

int	sb(t_stacks *s, int sw)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < s->max - (s->max - s->size))
		i++;
	ft_putnbr_fd(i, 1);
	if (sw == 0)
		ft_putstr("sb\n");
	if (i > s->max - 2)
		return (1);
	tmp = s->b[i];
	s->b[i] = s->b[i + 1];
	s->b[i + 1] = tmp;
	return (0);
}

int	ss(t_stacks *s)
{
	ft_putstr("ss\n");
	sa(s, 1);
	sb(s, 1);
	return (0);
}
