#include <unistd.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}
