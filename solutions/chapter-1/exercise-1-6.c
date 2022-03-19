/*
K&R2, chapter 1, section 1.5 Character Input and Output, exercise 1-6

Verify that the expression getchar() != EOF is 0 or 1.

Created by Konstantin Kotsarev on 2022-03-19
*/

#include <stdio.h>

int main()
{
    printf("%d\n", getchar() != EOF);
}
