#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||i>0)
            {
                if(s[i-1]!='z')flag=1;
            }
            else
            {
                if(s[i]<s[i-1])flag=1;
            }
        }
        if(flag==0)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    
    }
    return 0;
}