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
       int s,x,y,z;
       cin>>s>>x>>y>>z;
       p=s-(x+y);
       if(p>z)
       {
        cout<<"0"<<endl;
       }
       else
       {
        if(z<x||z<y)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
       }
        
    
    }


    return 0;
}