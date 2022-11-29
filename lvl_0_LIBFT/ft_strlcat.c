/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:34:39 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 18:31:16 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	count;

	if ((!dest && !src))
		return (0);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	len_dest = ft_strlen(dest);
	count = 0;
	if (size <= len_dest)
		return (len_src + size);
	while (src[count] != '\0' && (count + len_dest) < size - 1)
	{
		dest[len_dest + count] = src[count];
		count++;
	}
	dest[count + len_dest] = '\0';
	return (len_dest + len_src);
}