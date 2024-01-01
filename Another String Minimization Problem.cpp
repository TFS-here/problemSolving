#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char s[m];
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            s[i]='B';
        }int temp=0;
        for(int i=0;i<m;i++)
        {int x=a[i];
            if(x==(i+1)){
                temp=i;
                }
            else if(x!=(i+1))
               {i=(m+1-x);
               temp=i;}
               s[temp]='A';
              s[i]='B';
        cout<<s;}
    for(int i=0;i<m;i++)
        {
            cout<<s[i]<<endl;
        }
    }
        return 0;
}
