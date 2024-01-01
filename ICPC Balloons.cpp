#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[i-1])
                ans=ans+2;
            else if(s[i]==s[i-1])
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
