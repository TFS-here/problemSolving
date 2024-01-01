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
        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>k;
        for(int i=0;i<n;i++)
        {
           if(a[i]==a[i+1])
           k.push_back(i);

        }
        for(int i=0;i<k.size();i++)
        {
            cout<<k[i]<<endl;}
    }
}
