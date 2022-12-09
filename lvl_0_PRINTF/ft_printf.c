/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:28:17 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/09 11:01:26 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int  ft_converter(char cl, va_list arg, int n)
{
    if (cl == '%')
    {
        ft_putchar_n('%', n);
        return(1);
    }
    else if (cl == 'c')
    {
        ft_putchar_n(va_arg(arg, int), n);
        return (1);
    }
    else if (cl == 's')
        return(ft_puts_n(va_arg(arg, char *), n));
    else if (cl == 'p')
        return(ft_putp_n(va_arg(arg, unsigned long long), n));
    else if (cl == 'd')
        return(ft_putd_n(va_arg(arg, int), n));
    else if (cl == 'i')
        return(ft_putd_n(va_arg(arg, int), n));
    else if (cl == 'u')
        return(ft_putu_n(va_arg(arg, unsigned int), n));
    else if (cl == 'x')
        return(ft_putx_n(va_arg(arg, unsigned int), n, cl));
    else if (cl == 'X')
        return(ft_putx_n(va_arg(arg, unsigned int), n, cl));
    else
        return(ft_puts_n("Sorry", n));
}

int ft_printf(const char *str, ...)
{
    int c;
    int next;
    va_list arg; 
    va_start(arg, str);
    
    c = 0;
    next = 0;
    
    while(str[c] != '\0') 
    	{
            if (str[c] != '%')
            {
                next++;
                ft_putchar_n(str[c], 1);
            }
            if (str[c] == '%')
            {
                next += ft_converter(str[c + 1], arg, 1);
                c++;
            }
            c++;
	    }
    va_end(arg); 
    return(next);
}