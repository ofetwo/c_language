#include <stdio.h>

int main(void)
{
    int a = 1, b = 2; // initialization(recommended)
    int c;
    c = a + b;
    
    // int a = 1, b = 2, c = a + b; // initialization(possible)

    printf("Result is 3\n");
    printf("Result is %i\n", 3); // "%~" place holder
    printf("Result is %i\n", 1 + 2);
    printf("Result is %i\n", c);
    printf("%i + %i = %i\n", a, b, c);
    return 0;
}
