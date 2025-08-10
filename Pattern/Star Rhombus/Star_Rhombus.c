#include <stdio.h>
int main(void){
    int n;
    printf("enter the number of lines the rhombus must have =>");
    scanf("%d",&n);

    // Loop for each row
    for(int i=1; i<=n; i++){
        // Print leading spaces
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        // Print stars
        for(int k=1; k<=n; k++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
