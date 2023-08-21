#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*s1;
	int		l;

	l = ft_strlen(src);
	s1 = (char *) malloc (sizeof (char) * l + 1);
	if (s1 == 0)
		return (NULL);
	ft_strcpy(s1, src);
	printf("%s", s1);
	return (s1);
}
int main()
{
	char s2[] = "Rodrigo000";
	ft_strdup(s2);
}