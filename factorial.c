#include <stdio.h>

int factorial(int);

int factorial(int n) {
    if (n == 1 || n == 0)
    {
        return 1;
    }
    

    return factorial(n-1) * n;
}


int main() {
    int a = 5;
    printf("the factorial of %d is %d \n", a, factorial(a));
    return 0;
}