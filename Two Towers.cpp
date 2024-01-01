#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    for(int i=1;i<=4;i++)
    {
        for(int j=3;j>=i;j--)
        { 
            cout<<" ";
            
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout<<" ";
            
        }
        for(int k=4;k>=(2*i-2);k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}