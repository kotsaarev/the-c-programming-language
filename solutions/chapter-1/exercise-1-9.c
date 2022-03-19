/*
K&R2, chapter 1, section 1.5 Character Input and Output, exercise 1-9

Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.

Created by Konstantin Kotsarev on 2022-03-19
*/

#include <stdio.h>

#define YES 1
#define NO  0

int main()
{
    int c, blank;

    blank = NO;

    while ((c = getchar()) != EOF) {
        if (c != ' ')
            blank = NO;
        
        if (blank == NO)
            putchar(c);
        
        if (c == ' ')
            blank = YES;
    }
}
