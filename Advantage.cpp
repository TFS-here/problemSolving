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
        int n;
        int a[n];
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b.push_back(a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]){
            cout<<b[i]-a[0]<<" ";
            }
            else
            if(a[i]==b[i])
            {
                cout<<b[i]-a[1]<<" ";
            }
        }
        cout<<endl;
    
    }
    return 0;
}