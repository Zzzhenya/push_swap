#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char  *str)
{
    int len;

    len = 0;
    if (!str)
        return (len);
    while (str[len] != '\0')
        len ++;
    return (len);
}

int main(int argc, char **argv)
{
    int i;

    i = 2;
    if (argc == 2)
        write (1, argv[1], ft_strlen(argv[1]));
    else if (argc > 2)
    {
        while (i <= argc)
        {
            write (1, argv[i - 1], ft_strlen(argv[i - 1]));
            write (1, " ", 1);
            i ++;
        }
    }
    else
        write (1, "\n", 1);
}