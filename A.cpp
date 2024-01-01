#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    int a[n],ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       
    }
     for(int i=0;i<n;i++)
    {
        if(a[i+1]<=a[i])
        ans+=a[i]-a[i+1];
    }
    cout<<ans<<endl;
    return 0;
}