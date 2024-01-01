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
        int n,ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       if( n==1)ans=1;
       else{
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {

           if((a[i+1]-a[i])==1||(a[i+1]-a[i])==0)
            ans=1;
           else
           {ans=0;
           break;
           }
        }
       }

        ans==1?cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}
