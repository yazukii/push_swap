/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yani <yani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/12 20:10:31 by yani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pa(int *a, int *b, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_putstr("pa\n\n");
	while(a[i] == 0 && i < size)
		i++;
	if (i == 0)
		return (1);
	i--;
	while(b[j] == 0)
		j++;
	a[i] = b[j];
	b[j] = 0;
	return (0);
}

int	pb(int *a, int *b, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_putstr("pb\n\n");
	while(b[i] == 0 && i < size)
		i++;
	if (i == 0)
		return (1);
	i--;
	while(a[j] == 0)
		j++;
	b[i] = a[j];
	a[j] = 0;
	return (0);
}