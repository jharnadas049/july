#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positive = 0, negative = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements into the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Count positives and negatives
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }

    // Display result
    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);

    return 0;
}
