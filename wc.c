#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
  int c, nc, nw, nl, state;
  nc = nw = nl = state = 0;
  state = OUT;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') ++nl;
    if (c == ' ' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
