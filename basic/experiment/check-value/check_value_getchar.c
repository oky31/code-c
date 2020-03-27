#include <stdio.h>

int main()
{
    int c;

    c = getchar();

    // printf("%d\n", c);

    while(c != '\n'){
        putchar(c);
    }
    
    // putchar(c);
    // while ((c = getchar()) != EOF){
    //     printf("%d", c);
    // }
}