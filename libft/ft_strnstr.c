/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:56:21 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/16 14:19:43 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t taille;

	if (*little == '\0')
		return ((char *)big);
	taille = ft_strlen(little);
	while (*big != '\0' && len-- >= taille)
	{
		if (*big == *little && ft_memcmp(big, little, taille) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
