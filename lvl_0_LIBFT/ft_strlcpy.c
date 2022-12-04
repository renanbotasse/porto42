/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:36:11 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:36:13 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lenght;
	size_t	i;

	lenght = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (size == 0)
	{
		return (lenght);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lenght);
}
