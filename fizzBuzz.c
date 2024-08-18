#include <stdio.h>

int main () {
    // soled fizz buzz question

    for(int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("fizz\n");
        } else if( i % 5 == 0){
            printf("buzz\n");
        } else if( i % 7 == 0) {
            printf("bazz\n");
        } else {
            printf("%d\n", i);
        }
    }


    return 0;
}