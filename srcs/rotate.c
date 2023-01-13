/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/13 16:17:46 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ra(int *a, int size, int sw)
{
	int	i;
	int	tmp;

	i = 0;
	if (sw == 0)
		ft_putstr("ra\n");
	while(a[i] == 0 && i < size)
		i++;
	if (i > size - 2)
		return (1);
	tmp = a[i];
	while(i < size - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = tmp;
	return (0);
}

int	rb(int *b, int size, int sw)
{
	int	i;
	int	tmp;

	i = 0;
	if (sw == 0)
		ft_putstr("rb\n");
	while(b[i] == 0 && i < size)
		i++;
	if (i > size - 2)
		return (1);
	tmp = b[i];
	while(i < size - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = tmp;
	return (0);
}

int	rr(int *a, int *b, int size)
{
	ft_putstr("rr\n");
	ra(a, size, 1);
	rb(b, size, 1);
	return (0);
}