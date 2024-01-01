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
        int n,m;
        cin>>n>>m;
        if(n==1||m==1)
            cout<<n<<" "<<m<<endl;
        else if(n==2&&n==2)cout<<n<<" "<<m<<endl;
        else if(n==3&&m==3) cout<<2<<" "<<2<<endl;
        else
            cout<<n-1<<" "<<2<<endl;
    }
    return 0;

}
