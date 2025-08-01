#include <stdio.h>
int main(void){
    int n;
    printf("enter the number of lines -->");
    scanf("%d",&n);

    // print spaces 
    for(int i=1; i<=n; i++){
        for(int l=1; l<=n-i; l++){     
            printf(" ");
        }
        int a=1;

        // print number triangle (left half)
        for(int j=1; j<=i; j++){ 
            printf("%d", a);
            a++;
        }
        int b=i-1;

         // to print reverse half of triangle (right half)
        for(int k=1; k<=i-1; k++){   
        printf("%d", b);             // i-1 reduces 1 number from each line
            b--;
        }
        printf("\n");
    }
    return 0;
}