#include <stdio.h>

// Function to calculate a^b using fast exponentiation (logarithmic time)
int power_log(int a, int b) {
    // Base case: any number raised to 0 is 1
    if (b == 0) return 1;

    // Recursive call to calculate a^(b/2)
    int x = power_log(a, b / 2);
    int answer;

    // If exponent is even: a^b = (a^(b/2))^2
    if (b % 2 == 0) {
        answer = x * x;
    }
    // If exponent is odd: a^b = (a^(b/2))^2 * a
    else {
        answer = x * x * a;
    }

    return answer;
}

int main(void) {
    int a, b;

    // Input base
    printf("Enter the base: ");
    scanf("%d", &a);

    // Input exponent
    printf("Enter the power: ");
    scanf("%d", &b);

    // Calculate power using fast exponentiation
    int result = power_log(a, b);

    // Output result
    printf("The result is %d", result);

    return 0;
}
