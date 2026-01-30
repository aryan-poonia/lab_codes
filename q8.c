#include <stdio.h>

int main() {
    int arr[10];
    int size = 7;
    int i, key, found = 0;

    // Input 7 elements
    printf("Enter 7 elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to delete
    printf("Enter element to delete: ");
    scanf("%d", &key);

    // Search the element
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // If element found, shift left
    if (found == 1) {
        for (; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}