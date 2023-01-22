/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:13:06 by rbotasse          #+#    #+#             */
/*   Updated: 2022/08/01 10:13:08 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strdup(char *src)
{
	char	*s1;
	int		l;

	l = ft_strlen(src);
	s1 = (char *) malloc (sizeof (char) * l + 1);
	if (s1 == 0)
		return (NULL);
	ft_strcpy(s1, src);
	return (s1);
}
