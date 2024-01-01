#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f1=0,f2=0,ans=2,sum=0;
        sort(a,a+n);
        if(a[0]==a[n-1])
        {
            for(int i=n;i>2;i--)
            {
                ans+=(i-1)*2;
            }
            sum=ans/2;
        }
        else 
        {
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[0])f1++;
            if(a[i]==a[n-1])f2++;
        }
        sum=(f1*f2)+(f2*f1);
        }
      //cout<<f1<<"\t"<<f2<<endl;
       cout<<ans<<endl;
    }
    

    return 0;
}