/*
K&R2, chapter 1, section 1.5 Character Input and Output, exercise 1-12

Write a program that prints its input one word per line.

Created by Konstantin Kotsarev on 2022-03-19
*/

#include <stdio.h>

int main()
{
    int c;

	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
}
