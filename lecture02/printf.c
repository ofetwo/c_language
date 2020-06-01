#include <stdio.h>

int main(void)
{
    // print formatted
    printf("The truth is ... I am Ironman.");
    printf(" ");
    printf("The truth is ... I am Ironman.\n"); // "\~" escape sequence
    printf("\"The truth is ... I am Ironman.\"\n");
    // printf("\a"); // alarm

    printf("Result is 3\n");
    printf("Result is %i\n", 3); // "%~" place holder
    printf("%s %i\n", "Result is", 1+2);
    
    return 0;
}
