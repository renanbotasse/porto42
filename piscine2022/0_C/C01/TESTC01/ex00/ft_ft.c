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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int a = 1;
	int *nbr;
	
	nbr = &a;
	ft_ft(nbr);
	printf("%d\n", *nbr);
	ft_ft(nbr);
	printf("%d\n", *nbr);
	return (0);
}
