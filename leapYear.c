#include <stdio.h>

int main() {
    int year;
    printf("Enter Year: \n");
    scanf("%d", &year);
    
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("This is a leap year.\n");
    } else {
        printf("This is not a leap year.\n");
    }

    return 0;
}
