#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c < 122)
	{
		++c;
		write(1, &c, 1);
	}
}
