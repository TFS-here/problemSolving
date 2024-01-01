#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ans=0;
    cin>>n;
    int a[n];
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    sum =accumulate(a,a+n,sum);
    for( int i=0;i<n;i++)
    {
      if((sum-a[i])>a[i])
        ans++;


    cout<<ans<<endl;}
    return 0;
}
