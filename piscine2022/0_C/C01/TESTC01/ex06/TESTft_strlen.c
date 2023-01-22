/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:58:32 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/18 13:58:51 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	
	while (str[i] != '\0')
 		i++;
 	return(i);
}

int main()
{
	char *string1 = "CAKE IS A LIE";
	ft_strlen(string1);
	return(0);
}
