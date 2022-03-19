/*
K&R2, chapter 1, section 1.5 Character Input and Output, exercise 1-11

How would you test the word count program?
What kinds of input are most likely to uncover bugs if there are any?

Created by Konstantin Kotsarev on 2022-03-19
*/

/* Answer: https://stackoverflow.com/questions/14993124/the-c-programming-kr-exercise-1-11 */
/*

The program you posted treats everything which is delimited by whitespace as a word.
So these are all words: 12 a,b123456 2-3@!#.

It asks you to improve the program with a better definition of word,
and gives an example: "a sequence of letters,digits and apostrophes that begins with a letter".

So with this example John's and a123 is a word, but 12, 1a and a-b aren't.

*/

#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */

int main()
{
    int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("lines: %d words: %d character: %d\n", nl, nw, nc);
}
