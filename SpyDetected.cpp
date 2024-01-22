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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        if(a[0]==a[1]){

         for(int i=0;i<n;i++)
        {
            if(a[i]!=a[1])
            {
            ans=i+1;
            //cout<<i<<" j";
            break;
            }
        }
        }
        else if (a[0]!=a[2])
        {
            ans=1;
        }
        else
        {
            ans=2;
        }
        cout<<ans<<"\n";
    
    }
    return 0;
}