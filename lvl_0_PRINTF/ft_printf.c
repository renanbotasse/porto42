/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:28:17 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/04 15:39:32 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_converter(char cl, va_list arg, int n)
{
    if (cl == '%')
    {
        return(write(1, '%', n));
    }
    else if (cl == 'c')
    {
        ft_putchar_fd(va_arg(arg, int), n);
        return (1)
    }
    else if (cl == 's')
        return(ft_puts_fd(va_arg(arg, char *), n));
    else if (cl == 'p')
        return(ft_putp_fd(va_arg(arg, unsigned long long), n));
    else if (cl == 'd')
        return(ft_putd_fd(va_arg(arg, int), n));
    else if (cl == 'i')
        return(ft_puti_fd(va_arg(arg, int), n));
    else if (cl == 'u')
        return(ft_putu_fd(va_arg(arg, unsigned int), n));
    else if (cl == 'x')
        return(ft_putx_fd(va_arg(arg, unsigned int), n, cl));
    else if (cl == 'X')
        return(ft_putX_fd(va_arg(arg, unsigned int), n, cl));
    else
        return(write(1, 'Sorry', 5));
}

int ft_printf(const char *str, ...) //... significa que pode receber qualquer VAR
{
    int c;
    int next;
    va_list arg; //va_list recebe os args gerados pelo "..."
    va_start(arg, str); //va_start é formado  pelo va_list + str
    
    c = 0;
    next = 0;
    
    while(str[c] != '\0') //enquanto nao terminar
    {
        if (str[c] == '%') //manda para conversao
            {
            c++;
            next += converter(str[c], arg, 1); //declarado, precisa ter funcao primeiro no codigo
            }
        else //ja imprime
            {
            next += write(1, &str[c], 1);
            c++                
            }
    } 
    
    va_end(arg); //finaliza a utilização do VA
    return(next); //retorna o resultado do NEXT
}