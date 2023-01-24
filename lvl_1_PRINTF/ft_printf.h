/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:08:47 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/11 11:15:25 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	print_d(int nb);
int	ft_putchar(char c);
int	ft_find(char c, va_list *ptr);
int	ft_printf(const char *format, ...);
int	print_p(unsigned long int nb);
int	print_u(unsigned int nb);
int	print_x(unsigned int nb, int s);
int	print_s(char	*str);
#endif
