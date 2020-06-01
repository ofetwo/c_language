#include <stdio.h>

int main(void)
{
    int a = 1, b = 2; // initialization(recommended)
    int c;
    c = a + b;
    
    // int a = 1, b = 2, c = a + b; // initialization(possible)

    printf("Result is %i\n", c);
    printf("%i + %i = %i\n", a, b, c);
    return 0;
}
