/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/10 18:00:05 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	getsize(int *a, int size)
{
	int	sz;
	int i;

	i = 0;
	if (a[i] != 0)
	{
		sz = 0;
		return(sz);
	}
	while(a[i] == 0 && i < size)
		i++;
	sz = i;
	return(sz);
}

int	sa(int *a, int size)
{
	int	tmp;
	int	sz;

	sz = getsize(a, size);
	ft_putstr("sa\n\n");
	if (size - sz < 2)
		return (1);
	tmp = a[sz];
	a[sz] = a[sz + 1];
	a[sz + 1] = tmp;
	return (0);
}

int	sb(int *b, int size)
{
	int	tmp;
	int	sz;

	sz = getsize(b, size);
	ft_putstr("sb\n\n");
	if (size - sz < 2)
		return (1);
	tmp = b[sz];
	b[sz] = b[sz + 1];
	b[sz + 1] = tmp;
	return (0);
}

int	ss(int *a, int *b, int size)
{
	ft_putstr("ss\n");
	sa(a, size);
	sb(b, size);
	return (0);
}

int	pa(int *a, int *b, int size)
{
	int	i;
	int	szb;
	int	sza;

	ft_putstr("pa\n\n");
	sza = getsize(a, size);
	szb = getsize(b, size);
	if (size - szb < 1)
		return (1);
	a[sza] = b[szb];
	b[szb] = 0;
	return (0);
}

int	pb(int *a, int *b, int size)
{
	int	i;
	int	szb;
	int	sza;

	ft_putstr("pb\n\n");
	sza = getsize(a, size);
	szb = getsize(b, size);
	if (size - sza < 1)
		return (1);
	ft_putnbr_fd(sza, 1);
	b[szb] = a[sza];
	a[sza] = 0;
	return (0);
}

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
	printstack(a, b, max);
	sa(a, max);
	printstack(a, b, max);
	pb(a, b, max);
	printstack(a, b, max);
	pb(a, b, max);
	printstack(a, b, max);
	return(0);
}
