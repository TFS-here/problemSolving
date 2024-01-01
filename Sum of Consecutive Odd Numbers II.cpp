#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,count=0;
        cin>>x>>y;
        if(y>x)swap(x,y);
        for(int i=y+1;i<x;i++)
        {
            if(i%2!=0)
                count+=i;
        }
        cout<<count<<endl;

    }
}
