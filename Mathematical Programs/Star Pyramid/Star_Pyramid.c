#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int a = 1; // number of stars in the current row

    for (int i = 1; i <= n; i++) {
        // print spaces before stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print stars
        for (int k = 1; k <= a; k++) {
            printf("*");
        }

        a += 2; // increase star count for next row
        printf("\n");
    }

    return 0;
}
