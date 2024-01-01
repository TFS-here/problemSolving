#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   for(int l=1;l<=t;l++)
    {
        int n,count=0;
        cin>>n;
        int j[n-2];
       for(int i=0;i<n-1;i++)
       {
           int a,b;
           cin>>a>>b;
           count+=a;
           count-=b;
          j[i]=count;
       }
       sort(j,j+(n-1));
       cout<<"Case "<<l<<": "<<j[n-2]<<endl;
    }
    return 0;
}
