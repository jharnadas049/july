#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Handle zero case
    if(decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Display binary number (in reverse order)
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
