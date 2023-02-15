/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/23 17:13:13 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pa(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_putstr("pa\n");
	while (i < s->max - s->size)
		i++;
	i--;
	while (j < s->max - (s->max - s->size))
		j++;
	s->a[i] = s->b[j];
	s->b[j] = 0;
	s->size += 1;
	return (0);
}

int	pb(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_putstr("pb\n");
	while (i < s->max - s->size)
		i++;
	while (j < s->max - (s->max - s->size))
		j++;
	j--;
	s->b[j] = s->a[i];
	s->a[i] = 0;
	s->size -= 1;
	return (0);
}
