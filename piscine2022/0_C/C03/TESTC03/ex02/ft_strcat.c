#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "BiGGGg";
	char dest[] = " Boss";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest, src));
	return (0);
}