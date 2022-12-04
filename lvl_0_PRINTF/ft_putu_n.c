/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:45:20 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/04 19:49:37 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned	int	unsigned(unsigned int n)
{
	int	d;

	d = 0;
	while (n != 0)
	{
		n = n / 10;
		d++;
	}
	return (d);
}

int		ft_putu_n(unsigned int nub, int n)
{
	unsigned int	d;
	char			*r;
	int				l;

	if (nub == 0)
		return (write (n, "0", 1));
	d = unsigned(n);
	l = d;
	r = malloc((d + 1) * sizeof(char));
	r[d--] = '\0';
	if (n == 0)
		r[0] = '0';
	while (n != 0)
	{
		r[d--] = (nub % 10) + 48;
		n = n / 10;
	}
	write(n, r, l);
	free(r);
	return (l);
}