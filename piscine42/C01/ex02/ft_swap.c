#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tp;
	tp = *a;
	*a = *b;
	*b = tp;

}
