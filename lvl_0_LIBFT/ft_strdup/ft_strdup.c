/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:08:32 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 13:08:33 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *src)
{
	unsigned int	i;
	size_t			len;
	char			*str;

	len = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}