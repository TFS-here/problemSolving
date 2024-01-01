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
        long long n,m,k;
        cin>>n>>m>>k;
        int a[m];
        for(long long i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        long long maxi=a[m-1];
        //cout<<maxi<<endl;
        double f= ceil(n/(k*1.00));
        if(f>=maxi)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}