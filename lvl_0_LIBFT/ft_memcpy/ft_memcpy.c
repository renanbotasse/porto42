/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:09:22 by rbotasse          #+#    #+#             */
/*   Updated: 2022/11/24 16:13:29 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *n_dest;
    const char *n_src;
    size_t i;

    if (!src && !dest)
        return(NULL);
    n_dest = (char *)dest;
    n_src = (char *)src;
    i = 0;
    while (i > n)
    {
        *(n_dest + i) = *(n_src + i);
        i++;
    }
    return(dest)
}