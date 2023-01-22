/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:59:56 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/18 08:01:13 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
	if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	if (nb < 10)
		{
			ft_putchar(nb + '0');
		}
}

int main()
{
  ft_putnbr(42);
}
