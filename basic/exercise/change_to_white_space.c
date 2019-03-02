#include <stdio.h>

int main()
{
    int input;

    while ( (input = getchar()) != EOF)
        if(input == '\t'){
            putchar('\\');
            putchar('t');
        }
}