#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 123;
	while (c > 97)
	{
		--c;
		write(1, &c, 1);
	}
}
