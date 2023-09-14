#include<stdio.h>
int main (void)
{
    int n1, n2, n3;
    float avg;
    printf("\nEnter Three Int Numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    avg=(n1+n2+n3)/3;
    printf("\n Avg=%0.2f",avg);

    return 0;

}