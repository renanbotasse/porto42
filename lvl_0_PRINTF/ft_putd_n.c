/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putd_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:30:47 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/04 19:37:18 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	real_n(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		n *= -1;
		c++;
	}
	if (n != 0)
		c--;
	while (n != 0)
	{
		c++;
		n /= 10;
	}
	return (c);
}

static char	*ft_itoa(int n)
{
	int		c;
	char	*s;

	c = real_n(n);
	s = (char *) malloc((s + 2) * sizeof(char));
	if (!s)
		return (NULL);
	s[c + 1] = '\0';
	if (n == 0)
		s[c] = '0';
	if (n < 0)
		s[0] = '-';
	while (n != 0)
	{
		s[count--] = absolute(n % 10) + '0';
		n /= 10;
	}
	return (string);
}

int	ft_putd_n(int nub, int n)
{
	char	*s;
	int		c;

	s = ft_itoa(n);

	c = 0;
	while (s[c] != '\0')
	{
		ft_putchar_n(s[c], n);
		c++;
	}
	free(s);
	return (c);
}