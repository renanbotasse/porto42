/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:38:10 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:38:12 by rbotasse         ###   ########.fr       */
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
