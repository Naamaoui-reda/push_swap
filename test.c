#include <stdio.h>
#include <stdlib.h>
#include"./libft/libft.h"

int main(int ac ,char **av)
{
    int i = 0;
    int *tab;
    int j = 0;
    char **s;
    tab = malloc(9 * sizeof(int));
    s = ft_split(av[1],' ');
    while (i < 8)
    {
        
        if(is_number(s[i]))
        {
            tab[j] = ft_atoi(s[i]);
            printf("%d\n",tab[j]);
            j++;
        }
       i++; 
    }
    return (0);
}