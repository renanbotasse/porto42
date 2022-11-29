/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:09:15 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/29 19:18:28 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	len_string;
	size_t	count;
	char	*array;

	len_string = ft_strlen(string);
	count = 0;
	array = (char *) malloc((len_string + 1) * sizeof(char));
	if (!array)
		return (NULL);
	while (string[count] != '\0')
	{
		array[count] = string[count];
		count++;
	}
	array[count] = '\0';
	return (array);
}