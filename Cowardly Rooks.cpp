// 𝒞𝓇𝑒𝒶𝓉𝑒𝒹 𝒷𝓎 𝒮𝐻𝐼𝐹𝒜𝒯
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

        int a,b,x,y;
        cin>>a>>b;
        for(int i=0;i<b;i++)
        {
            cin>>x>>y;
        }
        if(a>b)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
