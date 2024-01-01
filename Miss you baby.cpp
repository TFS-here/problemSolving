#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(n-1));

    for(int i=0;i<n-2;i++)
    {
        if(((a[i]+1)!=a[i+1])&&(a[i]!=a[0]+(n-1)))
            temp=a[i]+1;
        else
            temp=a[0]+(n-1);
    }
     for(int i=0;i<n-1;i++){
        if(n==2&&a[i]==1)
            temp=2;
        if(n==2&&a[i]==2)
            temp=1;
     }
     cout<<temp<<endl;
    return 0;
}
