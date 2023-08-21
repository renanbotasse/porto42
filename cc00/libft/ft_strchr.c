/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:37:11 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:37:13 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)s;
	while (s[i] != c)
	{
		if (!s[i])
			return (NULL);
		i++;
		new_str++;
	}
	return (new_str);
}
