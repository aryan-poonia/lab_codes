#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3};
    int size = 3;
    int pos, val1, val2, i;

    printf("Current array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position to insert two elements (0 to %d): ", size);
    scanf("%d", &pos);

    printf("Enter first value: ");
    scanf("%d", &val1);

    printf("Enter second value: ");
    scanf("%d", &val2);

    // Shift elements to the right by 2 positions
    for (i = size - 1; i >= pos; i--) {
        arr[i + 2] = arr[i];
    }

    // Insert two values
    arr[pos] = val1;
    arr[pos + 1] = val2;

    size += 2;

    printf("Array after inserting two elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}