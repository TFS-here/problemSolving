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
        cin>>n;
        int a[n];
        int sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)cout<<"0"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                while(a[i]%2!=0)
                {
                    a[i]=a[i]/2;
                    count++;
                }
            }
            cout<<count<<endl;
        }
    
    }
    return 0;
}