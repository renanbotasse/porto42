/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:00:11 by rbotasse          #+#    #+#             */
/*   Updated: 2023/01/03 22:01:51 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*gnl(char *s1, int offset)
{
	int		c;
	char	*array;

	c = 0;
	if (s1[offset + 1] == '\0' || offset == -1)
	{
		free(s1);
		return (NULL);
	}
	array = malloc((ft_strlen(s1) - offset + 1) * sizeof(char));
	while (s1[c + offset + 1] != '\0')
	{
		array[c] = s1[c + offset + 1];
		c++;
	}
	array[c] = '\0';
	free(s1);
	return (array);
}

int	ft_strchr(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] == '\n')
			return (c);
		c++;
	}
	return (-1);
}

char	*get_next_line(int fd)
{
	ssize_t		i;
	char		*old;
	static char	*new;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	old = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	i = 1;
	while (ft_strchr(old) == -1 && i > 0)
	{
		i = read(fd, old, BUFFER_SIZE);
		if (!old || (i <= 0 && !new))
		{
			free(old);
			return (NULL);
		}
		old[i] = '\0';
		new = ft_strjoin(new, old);
	}
	if (ft_strchr(new) > -1)
		old = ft_strdup(old, new, ft_strchr(new) + 2);
	else
		old = ft_strjoin(old, new);
	new = gnl(new, ft_strchr(new));
	return (old);
}
