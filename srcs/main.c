/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yani <yani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/16 15:57:53 by yani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printstack(int *a, int *b, int size)
{
	int	i;
	i = 0;
	while (i < size)
	{
		ft_putnbr_fd(a[i], 1);
		ft_putchar(' ');
		ft_putnbr_fd(b[i], 1);
		ft_putchar('\n');
		i++;
	}
	ft_putstr("_ _\n");
	ft_putstr("a b\n\n");
}

t_pos find_smallest(int *a, int size)
{
	int	i;
	t_pos	res;

	i = 0;
	while(a[i] == 0)
		i++;
	res.small = a[i];
	res.pos = 0;
	while (i < size)
	{
		if (a[i] < res.small && a[i] != 0)
		{
			res.small = a[i];
			res.pos = i;
		}
		i++;
	}
	return (res);
}

int	sorting(int *a, int *b, int size)
{
	int		i;
	t_pos	res;

	i = 0;
	while(a[size - 1] != 0)
	{
		while(a[i] == 0)
			i++;
		res = find_smallest(a, size);
		if (res.pos < size - i / 2)
		{
			while (a[i] != res.small)
				ra(a, size, 0);
		}
		else
		{
			while (a[i] != res.small)
				rra(a, size, 0);
		}
		pb(a, b, size);
	}
	while (b[size - 1] != 0)
		pa(a, b, size);
	return (0);
}

int	three_sort(int *a, int *b, int size)
{
	int	i;

	i = 0;
	while(a[i] == 0)
		i++;
	if(a[i] > a[i + 1] && a[i + 1] < a[i + 2] && a[i + 2] > a[i])
		sa(a, size, 0);
	else if(a[i] > a[i + 1] && a[i + 1] > a[i + 2] && a[i + 2] < a[i])
	{
		sa(a, size, 0);
		rra(a, size, 0);
	}
	else if(a[i] > a[i + 1] && a[i + 1] < a[i + 2] && a[i + 2] < a[i])
		ra(a, size, 0);
	else if(a[i] < a[i + 1] && a[i + 1] > a[i + 2] && a[i + 2] > a[i])
	{
		sa(a, size, 0);
		ra(a, size, 0);
	}
	else if(a[i] < a[i + 1] && a[i + 1] > a[i + 2] && a[i + 2] < a[i])
		rra(a, size, 0);
	return (0);
}

int four_sort(int *a, int *b, int size)
{
	ft_putchar('X');
	pb(a, b, size);
	pb(a, b, size);
	three_sort(a, b, size);
	pa(a, b, size);
	sorting(a, b, size);
	pa(a, b, size);
	sorting(a, b, size);
}

int	check_case(int *a, int *b, int size, int argc)
{
	if (argc == 4)
		three_sort(a, b, size);
	else if (argc == 6)
		four_sort(a, b, size);
	return(0);
}

int	simplifiy(int *a, int max)
{
	int	i;
	int	*newa;
	t_pos smallest;

	i = 1;
	newa = malloc(sizeof(int) * max);
	while(i < max)
	{
		smallest = find_smallest(a, max);
		a[smallest.pos] = 0;
		newa[smallest.pos] = i;
		ft_putnbr_fd(smallest.small, 1);
		ft_putchar('\n');
		i++;
	}
	printstack(newa, a, max);
	i = 0;
	while(i < max)
	{
		a[i] = newa[i];
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	i;
	int	max;

	max = argc - 1;
	i = 0;
	a = malloc(sizeof(int) * max);
	b = malloc(sizeof(int) * max);
	if (argc == 1)
		return (0);
	while(i < max)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	//printstack(a, b, max);
	simplifiy(a, max);
	//printstack(a, b, max);
	//check_case(a, b, max, argc);
	//printstack(a, b, max);
	return(0);
}
