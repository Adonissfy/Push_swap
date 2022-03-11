/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <asaffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:08:43 by asaffroy          #+#    #+#             */
/*   Updated: 2021/11/12 13:24:49 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{	
	int	t;

	t = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		t += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		t += ft_putnbr(n / 10);
	t += ft_putchar(n % 10 + '0');
	return (t);
}

unsigned int	ft_putnbr_u(unsigned int n)
{	
	int	t;

	t = 0;
	if (n > 9)
		t += ft_putnbr(n / 10);
	t += ft_putchar(n % 10 + '0');
	return (t);
}
