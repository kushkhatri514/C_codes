#include <stdio.h>

int main(void) {
    int n;

    // Ask the user to input number of rows and columns
    printf("Enter the number of rows and columns => ");
    scanf("%d", &n);

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        int a = 1; // Start number from 1 for each row

        // Inner loop to print decreasing number of columns
        for (int j = 1; j <= n + 1 - i; j++) {
            printf("%d ", a);
            a++;
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
