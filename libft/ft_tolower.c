#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

int main()
{
  int a = 'Q';
  int b = tolower(a);
  int c = ft_tolower(a);
  printf("%d   %d\n", b, c);
}
