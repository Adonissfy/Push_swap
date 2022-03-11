/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <asaffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:08:11 by asaffroy          #+#    #+#             */
/*   Updated: 2021/11/05 16:28:42 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int	n;

	n = 0;
	if (s == NULL)
		n += ft_putstr("(null)");
	else
		while (s[n])
			ft_putchar(s[n++]);
	return (n);
}
