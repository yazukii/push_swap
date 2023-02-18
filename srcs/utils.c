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

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**one_arg(char **argv, int *argc)
{
	int		i;
	char	**tab;

	if (*argc == 2)
	{
		*argc = ft_count_words(argv[1], ' ') + 1;
		argv = ft_split(argv[1], ' ');
		tab = malloc(sizeof(char *) * *argc);
		i = 1;
		while (i < *argc)
		{
			tab[0] = "./push_swap";
			tab[i] = argv[i - 1];
			i++;
		}
	}
	else
		tab = argv;
	return (tab);
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
