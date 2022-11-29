/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:16:30 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 21:16:32 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	count;
	char	*joined;

	count = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	while (s1[count] != '\0')
	{
		joined[count] = s1[count];
		count++;
	}
	count = 0;
	while (s2[count] != '\0')
	{
		joined[len_s1 + count] = s2[count];
		count++;
	}
	joined[len_s1 + count] = '\0';
	return (joined);
}