/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:39:48 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/24 18:39:50 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_strlen(char *str)
{
int i = 0;

while(str[i] != '\0')
{
	i++;
}

	return(i);
}

int main()
{
	int i;
	char s1[] = "Snake";
	
	i = ft_strlen(s1);

	printf("%d\n",i);
}