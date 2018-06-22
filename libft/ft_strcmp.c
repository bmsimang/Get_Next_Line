/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:38:20 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 16:23:03 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while (*(unsigned char*)(s1 + c) || *(unsigned char*)(s2 + c))
	{
		if (*(unsigned char*)(s1 + c) != *(unsigned char*)(s2 + c))
			return (*(unsigned char*)(s1 + c) - *(unsigned char*)(s2 + c));
		c++;
	}
	return (0);
}
