//Using multiple print statements
#include<stdio.h>

int main(void){
    int rows;
    int i, j;

    printf("Enter number of rows:  ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("* ");
            }
            printf("\n");
    }
    
    return 0;
}
