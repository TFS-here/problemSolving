#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
       s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    continue;


   cout<<"."<<s[i];}
    return 0;
}
