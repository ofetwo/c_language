#include <stdio.h>

int main(void)
{
    int a; // declaration
    int b;
    int c;

    a = 1; // assignment
    b = 2;
    c = a + b;

    printf("Result is %i\n", c);
    printf("%i + %i = %i\n", a, b, c);
    return 0;
}