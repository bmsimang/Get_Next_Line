/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:46:42 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 16:25:07 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*destination;

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	a++;
	destination = (char *)malloc(sizeof(char) * a);
	if (destination == NULL)
		return (NULL);
	a = 0;
	while (s1[a] != '\0')
	{
		destination[a] = s1[a];
		a++;
	}
	destination[a] = '\0';
	return (destination);
}
