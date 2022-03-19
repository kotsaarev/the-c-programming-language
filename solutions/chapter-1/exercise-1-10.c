/*
K&R2, chapter 1, section 1.5 Character Input and Output, exercise 1-10

Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b, and each backslash by \\.
This makes tabs and backspaces visible in an unambiguous way.

Created by Konstantin Kotsarev on 2022-03-19
*/

#include <stdio.h>

#define YES 1
#define NO  0

int main()
{
    int c, charReplaced;

    while ((c = getchar()) != EOF) {
        charReplaced = NO;

        if (c == '\t') {
            putchar('\\');
            putchar('t');
            charReplaced = YES;
        }

        if (c == '\b') {
            putchar('\\');
            putchar('b');
            charReplaced = YES;
        }

        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            charReplaced = YES;
        }

        if (charReplaced == NO) {
            putchar(c);
        }
    }
}
