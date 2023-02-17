/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/02/17 19:01:34 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_free(t_stacks *s, int *t)
{
	free(t);
	free(s->a);
	free(s->b);
	return (0);
}

int	empty_b(t_stacks *s)
{
	while (s->size != s->max)
		pa(s);
	return (0);
}

int	radix_sort(t_stacks *s)
{
	int	i;
	int	j;
	int	num;
	int	max_bits;

	max_bits = 0;
	i = 0;
	while (((s->max - 1) >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < s->max)
		{
			num = (s->a[s->max - s->size]);
			if (((num >> i) & 1) == 1)
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

void	cases(t_stacks *s, int *t)
{
	if (check_sorted(s) == 1)
		return ;
	else if (s->max == 2)
	{
		if (s->a[0] > s->a[1])
			sa(s, 0);
	}
	else if (s->max == 3)
		three_sort(s);
	else if (s->max == 5)
		sort_five(s);
	else
	{
		symplify(s, t);
		radix_sort(s);
	}
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

int	main(int argc, char **argv)
{
	int			i;
	int			*t;
	t_stacks	stck;
	char		**tab;

	if (argc == 2)
	{
		argc = ft_count_words(argv[1], ' ') + 1;
		tab = ft_split(argv[1], ' ');
		argv = malloc(sizeof(char *) * argc + 1);
		i = 1;
		while (i < argc)
		{
			argv[0] = "push_swap";
			argv[i] = tab[i - 1];
			i++;
		}
	}
	stck.max = argc - 1;
	stck.size = stck.max;
	i = 0;
	stck.a = malloc(sizeof(int) * stck.max);
	stck.b = malloc(sizeof(int) * stck.max);
	t = malloc(sizeof(int) * stck.max);
	if (argc == 1 || ft_is_int(argv, argc) == 1)
		return (0);
	while (i < stck.max)
	{
		if (max_int(ft_atoi(argv[i + 1])) == 1)
			return (1);
		t[i] = ft_atoi(argv[i + 1]);
		stck.a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (errors(&stck) == 1)
		return (0);
	cases(&stck, t);
	ft_free(&stck, t);
	return (0);
}
