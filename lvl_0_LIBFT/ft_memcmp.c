/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:44:48 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 19:03:24 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_s;
	unsigned char	*str2_s;

	str1_s = (unsigned char *) str1;
	str2_s = (unsigned char *) str2;
	while (n > 0)
	{
		if (*str1_s != *str2_s)
			return (*str1_s - *str2_s);
		str1_s++;
		str2_s++;
		n--;
	}
	return (0);
}