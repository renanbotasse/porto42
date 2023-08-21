#include<unistd.h>

#include<unistd.h>

void	ft_putstr(char *str)
{
	char	d;
	int		count;

	d = *str;
	count = 0;
	while (d != '\0')
	{
		d = str[count];
		if (d != '\0')
		{
			write(1, &d, 1);
		}
		count++;
	}
}
