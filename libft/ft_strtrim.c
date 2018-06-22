/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:03:08 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/15 17:09:01 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	terminate;
	size_t	len;

	begin = 0;
	len = 0;
	if (s != NULL)
	{
		while (begin < ft_strlen(s) && ft_isspace(s[begin]))
			begin++;
		terminate = ft_strlen(s) - 1;
		while (terminate > begin && ft_isspace(s[terminate]))
			terminate--;
		len = terminate - begin + 1;
	}
	return (ft_strsub(s, begin, len));
}
