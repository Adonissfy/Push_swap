/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <asaffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:46 by asaffroy          #+#    #+#             */
/*   Updated: 2021/11/03 08:33:38 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s,	size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (i < n)
	{
		ss[i] = 0;
		i++;
	}
	s = ss;
}
