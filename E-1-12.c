#include <stdio.h>


int main() {
 int c;
 putchar('\n');
 while ((c = getchar()) != EOF) {
    if (c == ' ') putchar('\n');
    else putchar(c); 
 }
}
