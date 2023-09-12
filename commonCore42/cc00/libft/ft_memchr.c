/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:37:57 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:37:59 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str_ptr;
	int					i;

	str_ptr = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (str_ptr[i] == (unsigned char)c)
			return (str_ptr + i);
		i++;
		n--;
	}
	return (NULL);
}
