/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:09:44 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/17 11:31:00 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	numb[3];

	numb[0] = '0';
	while (numb[0] <= '7')
	{
		numb[1] = numb[0] + 1;
		while (numb[1] <= '8')
		{
			numb[2] = numb[1] + 1;
			while (numb[2] <= '9')
			{
				write(1, &numb[0], 1);
				write(1, &numb[1], 1);
				write(1, &numb[2], 1);
				if (numb[0] != '7')
				{
					write(1, ", ", 2);
				}
				numb[2]++;
			}
			numb[1]++;
		}
		numb[0]++;
	}
}
