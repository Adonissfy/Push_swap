/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <asaffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:56 by asaffroy          #+#    #+#             */
/*   Updated: 2021/11/03 16:06:02 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ss;
	size_t		count;

	count = 0;
	ss = (const char *)s;
	while (count < n)
	{
		if (ss[count] == (const char)c)
			return ((void *)&ss[count]);
		count++;
	}
	return (NULL);
}
