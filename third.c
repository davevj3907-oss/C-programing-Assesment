#include <stdio.h>

// User-defined function using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before Swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After Swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
