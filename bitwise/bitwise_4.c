#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>


int ft_len(int tab[])
{
    int i = 0;
    if (!*tab)
        return (i);
    while (tab[i])
        i ++;
    return (i);
}

void    ft_bin(int tab[], int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        printf(" %d :", tab[i]);
        i ++;
        printf("\n");
    }
}

int main (void)
{
    int len;
    int num[7]= { 4, 3, 6, 2, 7, 1, 5};

    len = ft_len(num);
    printf("len: %d\n", len);
    ft_bin(num, len);

    return (0);
}