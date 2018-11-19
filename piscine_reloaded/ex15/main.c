#include <unistd.h>

void ft_putstr(char *str);

void ft_putchar(char c);

int main()
{
    char *s = "Recompiling, relaunching, voila!";
    ft_putstr(s);
    return (0);
}
