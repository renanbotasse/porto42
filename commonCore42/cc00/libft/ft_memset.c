/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:35:20 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:35:22 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str2;

	str2 = s;
	while (n > 0)
	{
		str2[n - 1] = c;
		n--;
	}
	return (str2);
}
