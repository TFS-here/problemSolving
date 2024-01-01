#include<iostream>
using namespace std;
int main()
{
   int ans=0;
    long long s[50];
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
        }
        for( int i=0;i<4;i++)
        {
        if(s[i]==s[i+1]||s[i]==s[i+2]||s[i]==s[i+3])
         ans++;
         }
    cout<<ans<<endl;
    return 0;
}
