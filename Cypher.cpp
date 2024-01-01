#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];}
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            string s;
            for(int j=0;j<m;j++){
                    cin>>s[j];
            if(s[j]=='D')
                a[i]++;
            if(s[j]=='U')
                a[i]--;
            if(a[i]==10)a[i]=0;
            if(a[i]<0)a[i]=9;

            }
             cout<<a[i]<<" ";
            }
    }
    return 0;
}
