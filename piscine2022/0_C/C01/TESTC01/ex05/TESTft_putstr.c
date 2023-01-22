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
#include<unistd.h>

#include<unistd.h>

void	ft_putstr(char *str)
{
	char	d;
	int		count;

	d = *str;
	count = 0;
	while (d != '\0')
	{
		d = str[count];
		if (d != '\0')
		{
			write(1, &d, 1);
		}
		count++;
	}
}
int main()
{
char string[]="Cake is a lie";
ft_putstr(string);
return(0);
}
/*
c = *(str + count);


void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
int main()
{
	char string[] = "CAKE";
	ft_putstr(string);
}

*/
