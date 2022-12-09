/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:54:54 by rbotasse          #+#    #+#             */
/*   Updated: 2022/12/09 09:08:52 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

int ft_printf(const char *str, ...);
void	ft_putchar_n(char c, int n);
int	ft_putd_n(int nub, int n);
int	ft_putp_n(unsigned long long s, int n);
int	ft_puts_n(char *s, int n);
int		ft_putu_n(unsigned int nub, int n);
int	ft_putx_n(unsigned int hex, int n, int d);
#endif