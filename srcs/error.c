/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:50:42 by yidouiss          #+#    #+#             */
/*   Updated: 2023/02/01 11:50:42 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	errors(t_stacks *s)
{
	int i;

	i = 0;
	while (i < s->max)
	{
		if (s->a[i] > 2147483647 || s->a[i] < -2147483648)
		{
			ft_putstr_fd("Error: number out of range", 1);
			return (1);
		}
		i++;
	}
	return (0);
}