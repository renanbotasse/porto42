/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:03:47 by rbotasse          #+#    #+#             */
/*   Updated: 2022/08/01 10:03:49 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*array;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == 0)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		printf("%d, ", min);
		i++;
		min++;
	}
	return (array);
}
int main()
{
	char i;
	char y;

	i = '0';
	y = '0';

	 ft_range(i, y);

}
