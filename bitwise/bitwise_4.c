#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>


int ft_len(int tab[])
{
    int i = 0;
    if (!tab[i])
        return (i);
    while (tab[i])
        i ++;
    return (i);
}

void    ft_push_one(int a[], int b[])
{
    int i;
    int j;

    i = 0;
    j = 0;
    int index = 2;
    while (a[i])
    {
        if (((a[i] >> index ) & 1) == 0)
        {
            b[j] = a[i];
            a[i] = -1;
            j ++;
        }
         i ++;
    }
}

void    ft_print(int tab[], int len)
{
    int i;

    i = 0;
    if (!tab[i])
        exit(printf("Empty\n"));
    while (i < len)
    {
        printf(" %d ", tab[i]);
        i ++;
    }
    printf("\n");
}

int main (void)
{
    int len;
    int a[7]= { 4, 3, 6, 2, 7, 1, 5};
    int b[7] = {0, 0, 0, 0, 0, 0, 0};

    printf("len: %d\n", ft_len(a));
    printf("a :");
    ft_print(a, ft_len(a));
    ft_push_one(a, b);
    printf("a :");
    ft_print(a, ft_len(a));
    printf("b :");
    ft_print(b, ft_len(b));

    return (0);
}