/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:49:28 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 16:26:42 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nouv;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	c = 0;
	if (!(nouv = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
		nouv[c++] = *s1++;
	while (*s2)
		nouv[c++] = *s2++;
	nouv[c] = '\0';
	return (nouv);
}
