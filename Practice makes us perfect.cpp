#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a[4],ans=0;
    
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[i]>=10)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}