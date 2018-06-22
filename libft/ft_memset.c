/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:50:49 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 15:57:44 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t s;

	s = 0;
	while (s < len)
	{
		*(unsigned char*)(b + s) = (unsigned char)c;
		s++;
	}
	return (b);
}
