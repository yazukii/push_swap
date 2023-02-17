/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:50:42 by yidouiss          #+#    #+#             */
/*   Updated: 2023/02/01 11:50:42 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	max_int(double s)
{
	if (s > 2147483647 || s < -2147483648)
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	return (0);
}

int	check_sorted(t_stacks *s)
{
	int	i;

	i = 0;
	while (i < s->max - 1)
	{
		if (s->a[i] > s->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	errors(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < s->max)
	{
		while (j < s->max)
		{
			if (s->a[i] == s->a[j] && i != j)
			{
				ft_putstr_fd("Error: duplicate number", 1);
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
