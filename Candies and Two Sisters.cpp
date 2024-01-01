#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,ans=0;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a%2==0)ans=(a/2)-1;
        else
            ans=a/2;
        cout<<ans<<endl;
    }
    return 0;
}
