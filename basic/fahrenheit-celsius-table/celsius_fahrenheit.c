#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%6s\t%3s\n","Cel","Fah");
    printf("-----------\n");
    while(celsius <= upper) {
        fahr = (5.0 / 9.0) * (-celsius -(-32)); 
        printf("%6.1f\t%3.0f\n", celsius, fahr);
        celsius  = celsius + step;
    }
}
