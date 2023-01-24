/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:33:25 by rbotasse          #+#    #+#             */
/*   Updated: 2023/01/24 18:34:19 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_gl(char *holder)
{
	int		i;
	char	*s;

	i = 0;
	if (!holder[i])
		return (NULL);
	while (holder[i] && holder[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (holder[i] && holder[i] != '\n')
	{
		s[i] = holder[i];
		i++;
	}
	if (holder[i] == '\n')
	{
		s[i] = holder[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_holder(char *holder)
{
	int		i;
	int		c;
	char	*s;

	i = 0;
	while (holder[i] && holder[i] != '\n')
		i++;
	if (!holder[i])
	{
		free(holder);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(holder) - i + 1));
	if (!s)
		return (NULL);
	i++;
	c = 0;
	while (holder[i])
		s[c++] = holder[i++];
	s[c] = '\0';
	free(holder);
	return (s);
}

char	*ft_read_and_save(int fd, char *holder)
{
	char	*currentLine;
	int		readerOfBytes;

	currentLine = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!currentLine)
		return (NULL);
	readerOfBytes = 1;
	while (!ft_strchr(holder, '\n') && readerOfBytes != 0)
	{
		readerOfBytes = read(fd, currentLine, BUFFER_SIZE);
		if (readerOfBytes == -1)
		{
			free(currentLine);
			return (NULL);
		}
		currentLine[readerOfBytes] = '\0';
		holder = ft_strjoin(holder, currentLine);
	}
	free(currentLine);
	return (holder);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*holder;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	holder = ft_read_and_save(fd, holder);
	if (!holder)
		return (NULL);
	line = ft_gl(holder);
	holder = ft_holder(holder);
	return (line);
}