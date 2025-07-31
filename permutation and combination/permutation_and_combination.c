#include <stdio.h>
#include <string.h>

// Function to calculate factorial of a number
unsigned long long factorial(int x) {
    unsigned long long fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate combination (nCr)
unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to calculate permutation (nPr)
unsigned long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main(void) {
    int n;
    int r;
    char op[4];

    // Infinite loop to repeatedly ask user for input until valid option or exit
    while (1) {
        // Input n and r values from the user
        printf("Enter the value of n: ");
        scanf("%d", &n);
        printf("Enter the value of r: ");
        scanf("%d", &r);

        // Ask user to choose between nPr or nCr
        printf("Enter 'nPr' or 'nCr' to calculate, or 'exit' to quit: ");
        scanf(" %s", op); // Notice the space before %s to catch leading newline

        // If user wants to calculate permutation
        if (strcmp(op, "nPr") == 0 || strcmp(op, "npr") == 0 || strcmp(op, "NPR") == 0 || strcmp(op, "npR") == 0) {
            unsigned long long npr = permutation(n, r);
            printf("\nThe value of nPr is: %llu\n", npr);
            break;
        }
        // If user wants to calculate combination
        else if (strcmp(op, "nCr") == 0 || strcmp(op, "ncr") == 0 || strcmp(op, "NCR") == 0 || strcmp(op, "ncR") == 0) {
            unsigned long long ncr = combination(n, r);
            printf("\nThe value of nCr is: %llu\n", ncr);
            break;
        }
        // Exit condition
        else if (strcmp(op, "exit") == 0 || strcmp(op, "Exit") == 0) {
            printf("Exiting the program.\n");
            break;
        }
        // Handle invalid input
        else {
            printf("Invalid input. Please enter 'nPr' or 'nCr'.\n");
        }
    }

    return 0;
}
