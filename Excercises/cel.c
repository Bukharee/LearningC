#include <stdio.h>

int main(){
float farh, celsius;
float higher, lower, step;
step = 20;
higher = 300;
lower = 0;
celsius = lower;
while (celsius <= higher) {
    farh =(((9.0/5.0) * celsius) +32.0);
    printf("%3.0f%6.1f\n", celsius, farh);
    celsius = celsius + step;
}
}
