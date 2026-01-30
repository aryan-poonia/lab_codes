#include <stdio.h>

int main() {
    int n, i;
    int max, smax;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = smax = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } 
        else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    printf("Second maximum element is: %d", smax);

    return 0;
}