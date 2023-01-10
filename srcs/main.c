/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:23 by yidouiss          #+#    #+#             */
/*   Updated: 2023/01/10 16:37:40 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	i;

	i = 0;
	a = malloc(sizeof(int) * argc - 1);
	b = malloc(sizeof(int) * argc - 1);
	if (argc == 1)
		return (0);
	while(i < argc - 1)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putnbr_fd(a[i], 1);
		//ft_putnbr_fd(i, 1);
		ft_putchar(' ');
		i--;
	}
	return(0);
}
