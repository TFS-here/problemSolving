#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>z&&y>z)
        printf("condition 1 is correct.\n");
    else
        printf("condition 1 is not correct.\n");

    if(x==1.0||x==3.0)
        printf("Condition 2 is correct.\n");
     else
        printf("condition 2 is not correct.\n");
    if((x<z&&x>y)||(x>z&&x<y))
        printf("condition 3 is correct.\n");
    else
        printf("condition 3 is not correct.\n");
        if((x>z&&x>y)||(x<z&&x<y))
        printf("condition 4 is correct.\n");
    else
        printf("condition 4 is not correct.\n");
        return 0;
}
