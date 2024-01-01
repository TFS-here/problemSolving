#include<stdio.h>
int main()
{
    int integer1,integer2;
    scanf("%d%d",&integer1,&integer2);
    printf("sum = %d",integer1+integer2);
    printf("product = %d",integer1*integer2);
    printf("difference = %d",integer1-integer2);
    printf("quotient = %d",integer1/integer2);
    printf("reminder = %d",integer1%integer2);
    return 0;
}
