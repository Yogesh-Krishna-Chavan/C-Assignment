#include<stdio.h>

int main(void)
{
    int num;
    int loop_var;

    printf("Enter Number :");
    scanf("%d",&num);

    for(loop_var=1; loop_var <=10; loop_var++)
    {
        printf("%d\n",loop_var * num);
    }
    return 0;
}