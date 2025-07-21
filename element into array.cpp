#include <stdio.h>

int main() {
    int n, i;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Input elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("\nThe elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
