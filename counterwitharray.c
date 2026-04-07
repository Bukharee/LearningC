#include <stdio.h>

int main() {

  int nwhite, nother, c;
  int ndigits[10];

  for (int i = 0; i <= 9; ++i) {
    ndigits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t') ++nwhite;
    else if (c >= '0'  && c <= '9') ++ndigits[c - '0'];
    else ++nother;
  }
  printf("digits=");
  for (int i = 0; i <= 9; ++i) {
    printf("%d ", ndigits[i]);
  }
  printf("number of white spaces=%d, number of other=%d\n", nwhite, nother);
}

