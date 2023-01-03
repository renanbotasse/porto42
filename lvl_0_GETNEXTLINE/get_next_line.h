/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:01:05 by rbotasse          #+#    #+#             */
/*   Updated: 2023/01/03 17:16:53 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10 
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_alt_strjoin(char *s1, char *s2);
char	*ft_alt_strdup(char *s2, const char *string, size_t size);
void	*ft_calloc(size_t nitems, size_t size);

#endif 