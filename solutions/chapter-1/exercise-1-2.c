/*
K&R2, chapter 1, section 1.1 Getting Started, exercise 1-2

Experiment to find out what happens when prints's argument string contains \c ,
where c is some character not listed above.

Created by Konstantin Kotsarev on 2019-12-11
*/

#include <stdio.h>

main()
{
  printf("hello, ");
  printf("world");
  printf("\n");
  printf("\a");
  printf("\b");
  printf("\c");
}
