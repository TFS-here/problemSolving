#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>s>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         map<int,char>m;
         int count=0;
         for(int i=0;i<n;i++)
         {
             if(m.find(a[i])!=m.end()&&s[i]!=m[a[i]])
             {
                 count=1;
                 break;
             }
             m.insert({a[i], s[i]});
         }

         if(!count) cout<<"NO"<<endl;
         else
            cout<<"YES"<<endl;
    }
    return 0;
}
