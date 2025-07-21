#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle special cases
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    } else {
        printf("Fibonacci Series: %d %d ", first, second);
        for (i = 2; i < n; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
