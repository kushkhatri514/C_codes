#include <stdio.h>

// Recursive function to calculate number of ways to climb stairs
int stairs(int n) {
    // Base cases:
    if (n <= 2) return n;

    // Recurrence relation: f(n) = f(n-1) + f(n-2)
    int total = stairs(n - 1) + stairs(n - 2);
    return total;
}

int main(void) {
    int a;

    // Ask user for number of stairs
    printf("Enter the number of stairs: ");
    scanf("%d", &a);

    // Calculate number of ways
    int result = stairs(a);

    // Print the result
    printf("The total number of ways to climb %d stairs is %d", a, result);

    return 0;
}
