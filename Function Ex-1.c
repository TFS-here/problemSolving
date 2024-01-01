#include<stdio.h>
int sum(int,int);
int main()
{
    int total;
    total=sum(5,6);
    printf("the total is : %d",total);
    return 0;
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
