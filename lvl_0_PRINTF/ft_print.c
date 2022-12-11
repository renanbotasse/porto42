/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:03:25 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/11 12:56:12 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int nb)
{
	long long	n;
	int			len;

	n = nb;
	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		len += print_d(n / 10);
		len += print_d(n % 10);
	}
	if (n < 10)
		len += ft_putchar(n + 48);
	return (len);
}

int	print_p(unsigned long int nb)
{
	int	len;

	len = 0;
	if (nb >= 16)
	{
		len += print_p(nb / 16);
		len += print_p(nb % 16);
	}
	if (nb < 16)
	{
		if (nb < 10)
			len += ft_putchar(nb + 48);
		else
			len += ft_putchar(nb + 87);
	}
	return (len);
}

int	print_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += print_u(nb / 10);
		len += print_u(nb % 10);
	}
	if (nb < 10)
		len += ft_putchar(nb + 48);
	return (len);
}

int	print_x(unsigned int nb, int s)
{
	int	len;

	len = 0;
	if (nb >= 16)
	{
		len += print_x(nb / 16, s);
		len += print_x(nb % 16, s);
	}
	if (nb < 16)
	{
		if (nb < 10)
			len += ft_putchar(nb + 48);
		else
		{
			if (s == 1)
				len += ft_putchar(nb + 87);
			else
				len += ft_putchar(nb + 55);
		}
	}
	return (len);
}

int	print_s(char	*str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (*str)
		len += write(1, str++, 1);
	return (len);
}
