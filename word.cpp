#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int a=0,b=0,c,d;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            a++;
        if(islower(s[i]))
            b++;
    }
     if(a>b)
     {
    for(int j=0;j<s.size();j++)
    {
        s[j]=towupper(s[j]);

    }

    cout<<s<<endl;
     }
     else
        {
    for(int k=0;k<s.size();k++)
    {
        s[k]=towlower(s[k]);

    }
    cout<<s<<endl;
        }

   return 0;

}
