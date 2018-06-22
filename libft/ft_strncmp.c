/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:54:02 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 16:32:02 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	v;

	v = 0;
	while (v < n && (s1[v] || s2[v]))
	{
		if (*(unsigned char*)(s1 + v) != *(unsigned char*)(s2 + v))
			return (*(unsigned char*)(s1 + v) - *(unsigned char*)(s2 + v));
		v++;
	}
	return (0);
}
