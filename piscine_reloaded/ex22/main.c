
#define ABS(value) (value < 0) ? (value * -1) : value
#include <stdio.h>

int main()
{
    int a = -3;
    int b = 0;
    int c = ABS(a);
    int d = ABS(b);
    printf("%d\n", c);
    printf("%d\n", d);
}
