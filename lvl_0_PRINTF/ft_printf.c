/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:58:13 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/11 12:03:36 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	i;

	i = write(1, &c, 1);
	return (i);
}

int	ft_find(char c, va_list *ptr)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(*ptr, int));
	if (c == '%')
		i += write(1, "%", 1);
	if (c == 'd' || c == 'i')
		i += print_d(va_arg(*ptr, int));
	if (c == 'u')
		i += print_u(va_arg(*ptr, unsigned int));
	if (c == 'x')
		i += print_x(va_arg(*ptr, unsigned int), 1);
	if (c == 'X')
		i += print_x(va_arg(*ptr, unsigned int), 2);
	if (c == 'p')
	{
		i += write(1, "0x", 2);
		i += print_p(va_arg(*ptr, unsigned long int));
	}
	if (c == 's')
		i += print_s(va_arg(*ptr, char *));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		l;
	int		i;
	va_list	ptr;

	l = 0;
	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] != '%')
			l += write(1, &format[i], 1);
		if (format[i] == '%')
		{
			l += ft_find(format[i + 1], &ptr);
			i++;
		}
		i++;
	}
	va_end(ptr);
	return (l);
}