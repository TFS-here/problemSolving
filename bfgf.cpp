#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    sort(s,s+strlen(s));
    int i,a=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=s[i+1])
            a++;
    }
   if(a%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}

