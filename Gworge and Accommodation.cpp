#include<stdio.h>
int main()
{
    int n,p,q,temp=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        if(p<=(q-2))
            temp++;
    }
    printf("%d\n",temp);
    return 0;
}
