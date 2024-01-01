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
        long long n,m,x;
        cin>>n>>m>>x;
        long long ans=1;
        if(x%n==0)
        {
            ans=(x/n)+(m*(n-1));
        }
        else
        {
            ans=(x/n)+1+(m*((x%n)-1));

        }
        cout<<ans<<endl;

    }
    return 0;
}
