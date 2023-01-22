#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		{
		i++;
		}
	return (s1[i] - s2[i]);
}



int main()
{
	char s1[] = "abC";
	char s2[] = "abc";
	int i;

printf("%d\n", ft_strcmp(s1, s2));

printf("%d\n", strcmp(s1, s2));

}