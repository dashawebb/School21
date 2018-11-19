#include <stdio.h>

int    ft_strlen(char *str);

void    ft_putchar(char c);

int main()
{

    char *s = "Voila!\n";
    int a = ft_strlen(s);
    printf("%d", a);
    return (0);
}
