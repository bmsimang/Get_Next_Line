/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:43:41 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 15:54:35 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t a;

	a = 0;
	while (a < n)
	{
		if (*(unsigned char*)(s1 + a) != *(unsigned char*)(s2 + a))
			return (*(unsigned char*)(s1 + a) - *(unsigned char*)(s2 + a));
		a++;
	}
	return (0);
}
