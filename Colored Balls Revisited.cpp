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
        int n;
        cin>>n;
        int a[n],ans=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int max=a[0];
        for(int i=0;i<n;i++)
        {
            if(max<=a[i])
            {max=a[i];
                ans=i;}


        }
        ans=ans+1;
        cout<<ans<<endl;


    }
    return 0;
}
