/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:01:49 by rbotasse          #+#    #+#             */
/*   Updated: 2023/01/03 21:52:33 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str2;

	str2 = s;
	while (n > 0)
	{
		str2[n - 1] = '\0';
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	c;
	char	*new;

	c = 0;
	if (!s1)
		s1 = ft_calloc(1, sizeof(char));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = ft_calloc((lens1 + lens2 + 1), sizeof(char));
	while (s1[c] != '\0')
	{
		new[c] = s1[c];
		c++;
	}
	c = 0;
	while (s2[c] != '\0')
	{
		new[lens1 + c] = s2[c];
		c++;
	}
	new[lens1 + c] = '\0';
	free(s1);
	return (new);
}

char	*ft_strdup(char *s2, const char *string, size_t size)
{
	size_t	lens;
	size_t	c;
	char	*array;

	free(s2);
	lens = ft_strlen(string);
	if (lens > size)
		lens = size;
	c = 0;
	array = (char *) malloc((lens + 1) * sizeof(char));
	if (!array)
		return (NULL);
	while (string[c] != '\0' && c < size - 1)
	{
		array[c] = string[c];
		c++;
	}
	array[c] = '\0';
	return (array);
}