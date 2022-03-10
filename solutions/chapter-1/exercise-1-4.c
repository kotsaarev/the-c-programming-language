/*
K&R2, chapter 1, section 1.2 Variables and Arithmetic Expressions, exercise 1-4

Write a program to print the corresponding Celsius to Fahrenheit table.

Created by Konstantin Kotsarev on 2022-03-10
*/

#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = -20, 10, ..., 150 */

int main()
{
    float celsius, fahr;
    int lower, upper, step;
    
    lower = -20;    /* lower limit of temperature scale */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    printf("Celsius-Fahrenheit\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0*celsius) + 32.0;
        printf("%7.0f %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
