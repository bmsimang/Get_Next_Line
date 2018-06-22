/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:13:02 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/16 14:21:34 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	t[10];
	int		i;
	long	number;

	i = 0;
	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number == 0)
		ft_putchar('0');
	while (number > 0)
	{
		t[i] = number % 10 + '0';
		number = number / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(t[i]);
		i--;
	}
}
