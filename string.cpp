#include<stdio.h>
int main()
{
    char s[50];
    int small=0,capital=0,digit=0,i=0;
    gets(s);
    for (i;s[i]!='\0';i++)
    {
        if(s[i]>=65&&s[i]<=90)
            capital++;
        else if(s[i]>=97&&s[i]<=122)
            small++;
        else if(s[i]>=48&&s[i]<=57)
            digit++;

    }
   printf("capital letter:%d\n",capital);
   printf("small letter :%d\n",small);
   printf("digits:%d\n",digit);
    return 0;
}
