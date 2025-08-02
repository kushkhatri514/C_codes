#include <stdio.h>

int main(void) {
    int n;

    // Prompt the user to enter the number of lines (must be odd for a symmetric diamond)
    printf("Enter an odd number of lines --> ");
    scanf("%d", &n);

    int nsp = n / 2;  // Number of spaces before the stars in the first row
    int nst = 1;      // Number of stars to print on the first row

    // Outer loop to handle each row
    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        // Adjust space and star counts based on row number
        if (i < n / 2 + 1) {
            // Upper half of diamond: decrease spaces, increase stars
            nsp--;
            nst += 2;
        } else {
            // Lower half of diamond: increase spaces, decrease stars
            nsp++;
            nst -= 2;
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
