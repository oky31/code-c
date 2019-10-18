#include <stdio.h>

int main()
{
    int counting, input;

    counting = 0;

    while ((input = getchar()) != EOF)
        if (input == ' ')
            counting++;
        else if (input == '\n')
            counting++;
        else if (input == '\t')
            counting++;

    printf("%d", counting);   
}