#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

int main()
{
  int a = 'B';
  int b = toupper(a);
  int c = ft_toupper(a);
  printf("%d   %d\n", b, c);
}
