#include <stdio.h>

int main()
{
    int counting, input;

    counting = 0;
    // while ( (input = getchar()) != EOF)
    //     if (input == ' ')
    //         ++counting;
    // printf("%d\n", counting);

    while ( getchar() != EOF)
        if (getchar() == ' ')
            ++counting;
    printf("%d\n", counting);
}