#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
        if(s[i]!=s[i+1]||s[i]!=s[i-1])
            count=1;

        }
        if(count==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
