#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
