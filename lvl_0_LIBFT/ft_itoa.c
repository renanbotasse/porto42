/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:40:14 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:40:16 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_alga(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n != 0)
		count--;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*string;

	count = ft_alga(n);
	string = (char *) malloc((count + 2) * sizeof(char));
	if (!string)
		return (NULL);
	string[count + 1] = '\0';
	if (n == 0)
		string[count] = '0';
	if (n < 0)
		string[0] = '-';
	while (n != 0)
	{
		string[count--] = absolute_value(n % 10) + '0';
		n /= 10;
	}
	return (string);
}
