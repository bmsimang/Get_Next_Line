/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:24:43 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 15:58:42 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	int	uni[2];

	ft_memcpy(uni, "\u00F8", 2);
	if (ft_isascii(c))
		write(fd, &c, 1);
	else
	{
		uni[1] = c;
		write(fd, &uni, 2);
	}
}
