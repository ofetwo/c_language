#include <stdio.h>

int main(void)
{
    int a, b, c; // declaration
    
    a = 1, b = 2, c = a + b; // assignment

    printf("Result is %i\n", c);
    printf("%i + %i = %i\n", a, b, c);
    return 0;
}
