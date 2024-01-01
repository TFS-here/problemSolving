#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],count=0,flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)count++;
            else flag++;
        }

        if(x%2==0 && count>=x) cout<<"NO"<<endl;
        else if(x%2!=0 && flag>0 && count%2==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}
