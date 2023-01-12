#/* ************************************************************************** */
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

int	rra(int *a, int size, int sw)
{
	int	i;
	int	tmp;

	i = size - 1;
	if (sw == 0)
		ft_putstr("rra\n\n");
	tmp = a[i];
	while(i > 0 && a[i - 1] != 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = tmp;
	return (0);
}

int	rrb(int *b, int size, int sw)
{
	int	i;
	int	tmp;

	i = size - 1;
	if (sw == 0)
		ft_putstr("rrb\n\n");
	tmp = b[i];
	while(i > 0 && b[i - 1] != 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = tmp;
	return (0);
}

int	rrr(int *a, int *b, int size)
{
	ft_putstr("rr\n\n");
	rra(a, size, 1);
	rrb(b, size, 1);
	return (0);
}
