#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - for looping and success
 *return 0 - for no error
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
a = n % 10;
if (a > 5)
{
printf("Last digit of %n is %a and is greater than 5\n", n, a);
}
else if (a == 0)
{
printf("Last digit of %n is %a and and is 0", n, a)
}
else if (a < 6 && a != 0)
{
printf("Last digit of %n is %a and is less than 6 and not 0", n, a);
}
return (0);
}
