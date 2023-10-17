#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>

void    bitwise_stuff(int n)
{
    int i = n;
    int num[16];
    int a;
    int size;
    a = 0;
    printf("%d :", i);
    if (i ==0)
    {
        printf("0\n");
        exit(0);
    }
    while (i > 0)
    {
        num[a] = i%2;
        i = i/2;
        a ++;
    }
    a --;
    while (a >= 0)
    {
        printf("%d",num[a]);
        a --;
    }
    printf("\n");
}


int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 0, INT_MAX, 10};
    int i = 0;
    int len;
    len = 10;
    while (len > 0)
    {
        bitwise_stuff(arr[i]);
        len --;
        i ++;
    }
    
    return (0);
}