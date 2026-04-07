#include <stdio.h>

int main() {
int blanks, c;
blanks = 0;

while ((c = getchar()) != EOF ) {
 if (c == ' ' || c == '\t' || c == '\n') {
  ++blanks;
}
}
printf("%d", blanks);
}
