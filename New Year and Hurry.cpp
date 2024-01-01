#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int m= 240-k;
    int z=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        z+=i*5;
        if(z>m)break;
        ans++;

    }
    cout<<ans<<endl;
    return 0;
}