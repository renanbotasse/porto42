/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:38:55 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/30 10:38:57 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;

	array = malloc(nitems * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nitems * size);
	return (array);
}
