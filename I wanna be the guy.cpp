#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n,x,y;
    cin>>n>>x;
    for( int i=0; i<x;i++)
    {
        cin>>a[i];
    }

    cin>>y;
    for(int i=x;i<x+y;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(x+y));
    int j=0;
    int c=0;
    for(int i=0;i<x+y;i++)
    {
       if(a[i]==a[i+1])
        continue;
        if(a[i]!=j++)
        c++;
        cout<<a[i]<<" "<<j<<endl;
    }
    if(c==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;

}
