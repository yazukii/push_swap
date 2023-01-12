/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yani <yani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/12 20:10:17 by yani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sa(int *a, int size, int sw)
{
	int	i;
	int tmp;

	i = 0;
	while(a[i] == 0)
		i++;
	if (sw == 0)
		ft_putstr("sa\n\n");
	if (i > size - 2)
		return (1);
	tmp = a[i];
	a[i] = a[i + 1];
	a[i + 1] = tmp;
	return (0);
}

int	sb(int *b, int size, int sw)
{
	int	i;
	int tmp;

	i = 0;
	while(b[i] == 0)
		i++;
	if(sw == 0)
		ft_putstr("sb\n\n");
	if (i > size - 2)
		return (1);
	tmp = b[i];
	b[i] = b[i + 1];
	b[i + 1] = tmp;
	return (0);
}

int	ss(int *a, int *b, int size)
{
	ft_putstr("ss\n\n");
	sa(a, size, 1);
	sb(b, size, 1);
	return (0);
}