/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:39:25 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/04 19:43:09 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count(unsigned long long s)
{
	int	c;

	c = 0;
	while (s != 0)
	{
		s /= 16;
		c++;
	}
	return (c);
}

int	ft_ptr(unsigned long long s, int n)
{
	if (s >= 16)
	{
		ft_ptr(s / 16, n);
		ft_ptr(s % 16, n);
	}
	else
	{
		if (s <= 9)
			ft_putchar_n(s + 48, n);
		else
			ft_putchar_n(s - 10 + 'a', n);
	}
	return (count(s));
}
int	ft_putp_n(unsigned long long s, int n)
{
	int					l;

	l = 0;
	if (s == 0)
	{
		l += write(n, "(nil)", 5);
		return (l);
	}
	l = write(n, "0x", 2);
	l += ft_ptr(s,n);
	return (l);
}