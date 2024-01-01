#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,ans=0;
    cin>>m>>n;
    if(m>0&&n>0)
    {
    if(m>n)swap(m,n);
    for(int i=m;i<=n;i++)
    {
        cout<<i<<" ";
        ans+=i;
    }
    cout<<"Sum="<<ans<<endl;
    }

    return 0;
}
