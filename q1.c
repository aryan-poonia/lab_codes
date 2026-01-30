#include <stdio.h>

int main() {
    int s[5];   // declaring an array of size 5
    int i;

    // Taking input values
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &s[i]);
    }

    // Printing array values
    printf("Values in the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", s[i]);
    }

    return 0;
}