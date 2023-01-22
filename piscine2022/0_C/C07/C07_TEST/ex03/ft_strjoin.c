/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:12:29 by rbotasse          #+#    #+#             */
/*   Updated: 2022/08/01 10:12:33 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_lengh(char **strs, int size, char *sep)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l = l + ft_strlen(strs[i]);
		i++;
	}
	l = l + (size - 1) * ft_strlen(sep) + 1;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0];
		return (str);
	}
	if (!(str = malloc(sizeof(char) * ft_lengh(strs, size, sep))))
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	char sep[] = ", ";
	printf("%s", ft_strjoin(ac, av, sep));

}