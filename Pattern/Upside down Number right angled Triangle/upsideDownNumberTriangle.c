#include <stdio.h>

int main(void) {
    int n;
    printf("enter the number of rows and coloumns =>");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=n+1-i; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}