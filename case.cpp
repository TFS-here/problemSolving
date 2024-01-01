#include <stdio.h>
int main()
{
 char c;
printf("enter a charecter=");
scanf("%c ",&c);
switch(c)
{
case 'a':
    case'A':
case 'e':
    case'E':
case 'i':
    case 'I':
case 'o':
    case 'O':
case 'u':
    case 'U':
printf("the char is vowel =%c\n ",c);
break;

default:
printf("%c\nconsonant",c);
}
return 0;
}
