/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:42:45 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 15:54:10 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t v;

	v = 0;
	while (v < n)
	{
		if (*(unsigned char*)(s + v) == (unsigned char)c)
			return ((void*)(s + v));
		v++;
	}
	return (NULL);
}
