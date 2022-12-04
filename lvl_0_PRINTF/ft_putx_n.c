/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:51:04 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/04 19:56:14 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex_digits(unsigned int n)
{
	int	c;
	
	c = 0;
	while (n != 0)
	{
		n /= 16;
		c++;
	}
	return (c);
}
int	ft_putx_n(unsigned int hex, int n, int d)
{
	int	l;

	l = count_hex_digits(hex);
	if (hex == 0)
	{
		write(n, "0", 1);
		return (1);
	}
	else if (hex >= 16)
	{
		ft_putx_n(hex / 16, n, d);
		ft_putx_n(hex % 16, n, d);
	}
	else if (hex <= 9)
		ft_putchar_n(hex + 48, n);
	else
	{
		if (p == 'X')
			ft_putchar_n((hex - 10 + 'A'), n);
		if (p == 'x')
			ft_putchar_n((hex - 10 + 'a'), n);
	}
	return (count_hex_digits(hex));
}