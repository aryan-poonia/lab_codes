// experiment 1: Dynamic Memory Allocation, Structures and Unions in C

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};


union Data {
    int num;
    float value;
};

int main() {

    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered the following elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    struct Student *s;
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("\nMemory allocation failed!");
        return 1;
    }

    printf("\n\nEnter student roll number: ");
    scanf("%d", &s->roll);

    printf("Enter student marks: ");
    scanf("%f", &s->marks);

    printf("\nStudent Information:");
    printf("\nRoll Number: %d", s->roll);
    printf("\nMarks: %.2f", s->marks);

    union Data d;

    d.num = 10;