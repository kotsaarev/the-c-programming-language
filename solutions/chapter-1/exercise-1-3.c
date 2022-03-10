/*
K&R2, chapter 1, section 1.2 Variables and Arithmetic Expressions, exercise 1-3

Modify the temperature conversion program to print a heading above the table.

Created by Konstantin Kotsarev on 2022-03-10
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Fahrenheit-Celsius\n");
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
