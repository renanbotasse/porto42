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
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int main()
{
	int a,b;
	int *div;
	int *mod;
	
	a = 10;
	b = 2;
	
	div = &a;
	mod = &b;
	
	printf("%d, %d, %i, %i\n", a, b, *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("%d, %d, %i, %i", a, b, *div, *mod);
	return(0);
}



