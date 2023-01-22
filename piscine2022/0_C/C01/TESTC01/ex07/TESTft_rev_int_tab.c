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
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int array2[];
	int size2;
	int count;
	
	array2 = *tab;
	size2 = size;
	count = 0;
	
	while (tab[size] != size)
{
			



}

int main()
{
	int *array[] = {1,2,3,4,5,6,7,8,9}
	int size = array[8]

	ft_rev_int_tab(array, size)
return (0);
}


void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;
	int	count;

	count = 0;
	i = 1;
	while (count < size)
	{
		t = tab[size - i];
		tab[size - i] = tab[count];
		tab[count] = t;
		i++;
		count++;
	}
}
