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

void	ft_swap(int *a, int *b)
{
	int tp;
	tp = *a;
	*a = *b;
	*b = tp;

}

	int main()
{
	int c;
	int d;
	int *pc;
	int *pd;

	c = 10;
	d = 42;
	pc = &c;
	pd = &d;
	printf("%d %d", c, d);
	ft_swap(pc, pd);
	printf("%d %d", c, d);	

			return (0);
}
