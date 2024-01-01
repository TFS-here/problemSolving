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
        int n,k;
        cin>>n>>k;
        int a[n],flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {
             if(a[i]==1){flag=1;break;}
        }

        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
