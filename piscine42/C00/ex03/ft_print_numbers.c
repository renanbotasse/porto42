#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 47;
	while (c < 57)
	{
		++c;
		write(1, &c, 1);
	}
}
