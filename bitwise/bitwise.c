/*#include <stdio.h>
#include <stdlib.h> 

void    bitwise_stuff(int i)
{
    unsigned int c;
    c = 16;
    printf("%d:", i);
    while (c>0)
    {
        if ((i&c) == 0)
            printf("%d", 0);
        else
            printf("%d", 1);
        c = c >> 1;
    }
    printf("\n");
}


int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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
*/