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

int	max_int(t_stacks *s)
{
	int	i;

	i = 0;
	while (i < s->max)
	{
		if (s->a[i] > (INT32_MAX) || s->a[i] < (INT32_MIN))
		{
			ft_putstr_fd("Error: number out of range", 1);
			return (1);
		}
		i++;
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
	if (max_int(s) == 1 || check_sorted(s) == 1)
		return (1);
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
