#include <stdio.h>

int main(){

int nc, c;

while ((c = getchar()) != EOF) {
    if (c == '\n') {
        printf("%d\n", nc);
        nc = 0;
    } else {
        ++nc;
    }
}
}
