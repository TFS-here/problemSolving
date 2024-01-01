#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],mini=999,maxi=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=1;i<n;i++)
        {
            if(a[i]>maxi)
                maxi=a[i];
            if(a[i]<mini)
                mini=a[i];
        }
         for(int i=0;i<n;i++)
        {
            if(i!=n-1)
                ans=max(ans,a[i]-a[i+1]);
        }
        ans=max(ans,a[n-1]-a[0]);
        ans=max(ans,a[n-1]-mini);
        ans=max(ans,maxi-a[0]);
        cout<<ans<<endl;

    }
    return 0;
}
