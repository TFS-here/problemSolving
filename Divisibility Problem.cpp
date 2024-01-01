#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        int count=0;
        int ans=0;
        cin>>a>>b;
        if(a%b!=0)
        {
        count=a%b;
        ans=b-count;
        }

        cout<<ans<<endl;
    }
    return 0;
}
