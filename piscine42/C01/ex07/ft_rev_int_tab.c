#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;
	int	count;

	count = 0;
	i = 1;
	while (count < size)
	{
		t = tab[size - i];
		tab[size - i] = tab[count];
		tab[count] = t;
		i++;
		count++;
	}
}
