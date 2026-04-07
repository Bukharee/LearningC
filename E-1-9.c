#include <stdio.h>


int main()
{
  int  c, count;
  count = 0;
  while ((c = getchar()) != EOF) {
   if (c != ' ' &&  count > 0) {
      count = 0;
      putchar(' ');
      putchar(c);
    } else if (c != ' ' && count == 0){
      putchar(c);
    } else {
      ++count;
    }
  }
}
