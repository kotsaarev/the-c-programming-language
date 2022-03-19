/*
K&R2, chapter 1, section 1.3 The For Statement, exercise 1-5

Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.

Created by Konstantin Kotsarev on 2022-03-19
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
