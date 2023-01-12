/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yani <yani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/12 20:14:32 by yani             ###   ########.fr       */
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
	rra(a, max, 0);
	sa(a, max, 0);
	pb(a, b, max);
	pb(a, b, max);
	sa(a, max, 0);
	pa(a, b, max);
	pa(a, b, max);
	printstack(a, b, max);
	return(0);
}
