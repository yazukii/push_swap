/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/26 18:46:06 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int empty_b(t_stacks *s)
{
	while(s->size != s->max)
		pa(s);
	return (0);
}

int	radix_sort(t_stacks *s)
{
	int	i;
	int	j;
	int	num;
	int	max_num;
	int	max_bits;
	
	max_num = s->max - 1;
	max_bits = 0;
	i = 0;
	while((max_num >> max_bits) != 0)
		max_bits++;
	while(i < max_bits)
	{
		j = 0;
		while(j < s->max)
		{
			num = (s->a[s->max - s->size]);
			if((num >> i) & 1 == 1)
				ra(s, 0);
			else
				pb(s);
			j++;
		}
		empty_b(s);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	t_stacks stck;
	int	*t;

	stck.max = argc - 1;
	stck.size = stck.max;
	i = 0;
	stck.a = malloc(sizeof(int) * stck.max);
	stck.b = malloc(sizeof(int) * stck.max);
	t = malloc(sizeof(int) * stck.max);
	if (argc == 1)
		return (0);
	while(i < stck.max)
	{
		t[i] = ft_atoi(argv[i + 1]);
		stck.a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if(stck.max == 3)
		three_sort(&stck);
	else if(stck.max == 5)
		sort_five(&stck);
	else
	{
		symplify(&stck, t);
		radix_sort(&stck);
	}
	return(0);
}
