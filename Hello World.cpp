#include<stdio.h>
int main()
{
    int n,k,t,i,sum=0,a=0;
    scanf("%d %d",&n,&k);
    t=240-k;
    for (i=1;i<=n;i++)
    {
        sum=sum+5*i;
        if (sum>t)
            break;

            a=a+1;

    }
    printf("%d",a);

    return 0;
}
	   			    	 	 			 	  					 	