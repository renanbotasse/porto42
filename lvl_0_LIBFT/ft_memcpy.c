/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:09:22 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 17:25:14 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				c;
	unsigned char		*dest2;
	const unsigned char	*src2;

	if (!dest && !src)
		return (NULL);
	c = 0;
	dest2 = dest;
	src2 = src;
	while (n > 0)
	{
		dest2[c] = src2[c];
		c++;
		n--;
	}
	return (dest2);
}