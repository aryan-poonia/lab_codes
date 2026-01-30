    #include <stdio.h>

    int main() {
        int s[5] = {10, 20, 30}; // data available at 3 indexes
        int size = 3;           // current number of elements
        int pos, value, i;

        printf("Enter the position to insert (0 to %d): ", size);
        scanf("%d", &pos);

        printf("Enter the value to insert: ");
        scanf("%d", &value);

        // Shift elements to the right
        for (i = size; i > pos; i--) {
            s[i] = s[i - 1];
        }

        // Insert value
        s[pos] = value;
        size++;

        // Print updated array
        printf("Array after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", s[i]);
        }

        return 0;
    }