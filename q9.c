#include <stdio.h>

int main() {
    int arr[10];
    int i, count = 0;

    // Input array
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (i = 0; i < 10; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill remaining positions with zero
    while (count < 10) {
        arr[count] = 0;
        count++;
    }

    // Print result
    printf("Array after moving zeroes to end:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}