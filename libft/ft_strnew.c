/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:55:40 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/16 12:51:20 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*temp;

	if (!(temp = (char*)malloc(sizeof(*temp) * (size + 1))))
		return (NULL);
	temp = (char*)ft_memset(temp, 0, size + 1);
	return (temp);
}
