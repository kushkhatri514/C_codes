#include <stdio.h>

int main(void) {
    int n;
    printf("Enter how many numbers you want to add => ");
    scanf("%d", &n);

    unsigned long long a[n];   // dynamic array of size n
    unsigned long long sum = 0;

    // Input numbers
    printf("Enter %d numbers:\n", n);
    for (int j = 0; j < n; j++) {
        scanf("%llu", &a[j]);
    }

    // Sum all numbers
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("The sum is %llu\n", sum);
    return 0;
}
