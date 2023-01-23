/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/23 18:49:27 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printstack(t_stacks *s)
{
	int	i;
	t_stacks stacks = *s;

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

t_pos find_smallest(t_stacks *s, int max)
{
	int	i;
	t_pos	res;

	i = 0;
	while(i < s->max - s->size)
		i++;
	res.small = s->a[i];
	res.pos = i;
	while(i < s->max)
	{
		if (s->a[i] < res.small && s->a[i] > max)
		{
			res.small = s->a[i];
			res.pos = i;
		}
		i++;
	}
	return (res);
}

int	simplifiy(t_stacks *s)
{
	int	i;
	t_pos smallest;
	int exep;

	while (i < s->max - s->size)
		i++;
	while (i < s->max)
	{
		exep = s->a[i];
		smallest = find_smallest(s, exep);
		b[smallest.pos] = smallest.small;
	}
	return(0);
}

//TODO Simplify funciton

int	main(int argc, char **argv)
{
	int	i;
	t_stacks stck;
	t_pos pos;

	stck.max = argc - 1;
	stck.size = stck.max;
	i = 0;
	stck.a = malloc(sizeof(int) * stck.max);
	stck.b = malloc(sizeof(int) * stck.max);
	if (argc == 1)
		return (0);
	while(i < stck.max)
	{
		stck.a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	printstack(&stck);
	simplifiy(&stck);
	printstack(&stck);
	return(0);
}
