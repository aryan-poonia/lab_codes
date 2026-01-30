#include <stdio.h>

int main() {
    int arr[10];
    int i, key, found = 0;

    // Input array elements
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    // If not found
    if (found == 0) {
        printf("Element not found in the array\n");
    }

    return 0;
}