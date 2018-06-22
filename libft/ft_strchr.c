/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:37:09 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 16:19:16 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int l;

	l = 0;
	while (s[l])
	{
		if (s[l] == (char)c)
			return ((char*)(s + l));
		l++;
	}
	if (s[l] == (char)c)
		return ((char*)(s + l));
	return (NULL);
}
