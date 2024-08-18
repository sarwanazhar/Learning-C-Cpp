#include <stdio.h>

int main () {
    int a, b , c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a>b){
        if (a > c){
            printf("a is greatest %d\n", a);
        } else if ( c > a ){
            printf("c is greatest %d\n", c);
        }
    }else if ( b > a) {
        if ( b > c) {
            printf("b is greatest %d\n", b);
        } else if ( c > b ){
            printf("c is greatest %d\n", c);
        }
    }

    return 0;
}