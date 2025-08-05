#include <stdio.h>

// Function to print Fibonacci series up to 'x' terms
int fibonacci(int x) {
    int first = 0;
    int second = 1;
    int result = 1;

    // Handle special cases
    if (x == 1) return 0;
    else if (x == 2) return 1;
    else if (x >= 3) {
        // Print first two terms manually
        printf("0, 1, ");
        
        // Generate the rest of the series
        for (int i = 1; i <= x - 2; i++) {
            result = first + second;
            first = second;
            second = result;
            printf("%d, ", result);
        }
    }
    else if (x <= 0) {
        printf("Enter a valid term");
    }

    return result; // Return the last Fibonacci number
}

int main(void) {
    int a;

    // Prompt user for input
    printf("Enter term: ");
    scanf("%d", &a);

    // Call function to print Fibonacci series
    fibonacci(a);

    return 0;
}