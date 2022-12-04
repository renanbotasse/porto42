/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:40:25 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:40:26 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi( char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	size_t	count;
	char	*sf;

	if (s == NULL || f == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	count = 0;
	sf = (char *) malloc((len_s + 1) * sizeof(char));
	if (!sf)
		return (NULL);
	while (s[count] != '\0')
	{
		sf[count] = f(count, s[count]);
		count++;
	}
	sf[count] = '\0';
	return (sf);
}
