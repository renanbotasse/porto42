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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	
	c = (*a / *b);
	d = (*a % *b);
	
	*a = c;
	*b = d;

}
int main()
{
	int z;
	int w;
	int *a;
	int *b;
	
	z = 100;
	w = 10;
	a = &z;
	b = &w;
	
	printf("%i, %i\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("%i, %i\n", *a, *b);
	
	
return(0);
}
