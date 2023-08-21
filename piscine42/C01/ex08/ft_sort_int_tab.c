#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int x;
    int swp;
    int y;

    x = 1;
    while (x < size)
    {
        swp = tab[x];
        y = x - 1;
        while (y >= 0 && tab[y] > swp)
        {
            tab[y + 1] = tab[y];
            y = y - 1;
        }
        tab[y + 1] = swp;
        x++;
    }
}
