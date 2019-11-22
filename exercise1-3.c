// Exercise 1.3. Modify the temperature conversion program to print a heading above the table.
// From section 1.3 pg 13 of 'The C Programming Language' second edition by Kernighan & Ritchie.

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Temp in C    Temp in F\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%9.0f %12.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
