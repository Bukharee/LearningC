#include <stdio.h>

int main(){
 float farh, celcius;
 float higher, lower, step;
 higher = 300;
 lower = 0;
 step = 20;
 farh = lower;
 printf("%3s%6s\n", "F", "C");
 while (farh <= higher) {
    celcius = (5.0/9.0) * (farh-32.0);
    printf("%3.0f %6.1f\n", farh, celcius);
    farh = farh + step;
}

}
