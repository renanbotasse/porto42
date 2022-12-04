/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:37:40 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:37:42 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && len - 1 > 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			len--;
		}
		else
			break ;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
