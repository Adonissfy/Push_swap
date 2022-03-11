/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <asaffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:15:02 by asaffroy          #+#    #+#             */
/*   Updated: 2021/11/04 11:40:40 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	int		b;
	char	*ptr;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = -1;
	ptr = malloc(sizeof(char) * (a + b));
	if (!ptr)
		return (NULL);
	while (++i < a)
		ptr[i] = s1[i];
	i--;
	while (++i - a < b)
		ptr[i] = s2[i - a];
	ptr[i] = '\0';
	return (ptr);
}
