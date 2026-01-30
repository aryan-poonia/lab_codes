#include <stdio.h>

int main() {
    int arr[5];
    int i, pos, value;

    // Input array elements
    printf("Enter 4 elements:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // Position and value to insert
    printf("Enter position to insert (0 to 4): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (i = 4; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[pos] = value;

    // Display array after insertion
    printf("Array after insertion:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}