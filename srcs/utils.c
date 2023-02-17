/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:22:46 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/26 16:22:46 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

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

int	symplify(t_stacks *s, int *t)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	bubblesort(s, t);
	while (i < s->max)
	{
		while (j < s->max)
		{
			if (s->a[i] == t[j])
			{
				s->a[i] = j;
				break ;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	printstack(t_stacks *s)
{
	int			i;
	t_stacks	stacks;

	stacks = *s;
	i = 0;
	while (i < stacks.max)
	{
		ft_putnbr_fd(stacks.a[i], 1);
		ft_putchar(' ');
		ft_putnbr_fd(stacks.b[i], 1);
		ft_putchar('\n');
		i++;
	}
	ft_putstr("_ _\n");
	ft_putstr("a b\n\n");
}

t_pos	find_smallest(t_stacks *s)
{
	int		i;
	t_pos	res;

	i = s->max - s->size;
	res.small = s->a[i];
	res.pos = i;
	while (i < s->max)
	{
		if (s->a[i] < res.small)
		{
			res.small = s->a[i];
			res.pos = i;
		}
		i++;
	}
	return (res);
}
