#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double ans=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        int count = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i-1])
                count++;
        }
        ans=ceil((count*1.00)/3);
        cout<<ans<<endl;
    }
}

