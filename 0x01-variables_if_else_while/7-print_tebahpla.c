#include <stdio.h>
/** a program that prints alphabets in reversal form
*return 0;
*/
int main (void)
{
  char c;
  for (c = 'z'; c < 'a'; c--)
    {
    putchar(c);
  }
  putchar('/n');
  return (0);
}
