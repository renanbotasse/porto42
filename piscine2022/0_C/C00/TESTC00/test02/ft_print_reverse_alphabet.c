/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:34:39 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/17 10:18:25 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	c;
	
	c = 123;
	
	while (c > 97)
	{
		--c;
		write(1, &c, 1);
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return (0);
}
