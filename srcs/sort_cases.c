/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:20:04 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/26 16:20:04 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

void	bubblesort(t_stacks *s, int *t)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < s->max)
	{
		while (j < s->max - 1)
		{
			if (t[j] > t[j + 1])
			{
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	three_sort(t_stacks *s)
{
	int	i;
	int	j;
	int	k;

	i = s->max - s->size;
	k = i + 2;
	j = i + 1;
	if (s->a[i] > s->a[j] && s->a[j] < s->a[k] && s->a[k] > s->a[i])
		sa(s, 0);
	else if (s->a[i] > s->a[j] && s->a[j] > s->a[k] && s->a[k] < s->a[i])
	{
		sa(s, 0);
		rra(s, 0);
	}
	else if (s->a[i] > s->a[j] && s->a[j] < s->a[k] && s->a[k] < s->a[i])
		ra(s, 0);
	else if (s->a[i] < s->a[j] && s->a[j] > s->a[k] && s->a[k] > s->a[i])
	{
		sa(s, 0);
		ra(s, 0);
	}
	else if (s->a[i] < s->a[j] && s->a[j] > s->a[k] && s->a[k] < s->a[i])
		rra(s, 0);
}

int	sort_five(t_stacks *s)
{
	choose_five(s);
	choose_four(s);
	three_sort(s);
	pa(s);
	pa(s);
	return (0);
}
