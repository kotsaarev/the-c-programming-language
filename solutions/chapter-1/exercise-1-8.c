/*
K&R2, chapter 1, section 1.5 Character Input and Output, exercise 1-8

Write a program to count blanks, tabs, and newlines.

Created by Konstantin Kotsarev on 2022-03-19
*/

#include <stdio.h>

int main()
{
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++newlines;
    }

    printf("%d blanks, %d tabs, %d newlines\n", blanks, tabs, newlines);
}
