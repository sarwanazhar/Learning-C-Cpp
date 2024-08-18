#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c) {
    return (a+b+c)/3.0;
}

int main () {
    int averaged = average(3,50,20);

    printf("the average of 3,50,20 is %.2f\n", averaged);
    return 0;
}