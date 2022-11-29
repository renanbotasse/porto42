/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:36:22 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 11:37:13 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	j;

	j = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + j);
	while (j >= 0)
	{
		if (str[j] == c)
			return ((char *)str + j);
		j--;
	}
	return (NULL);
}