#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,sum=0,y;
    int x=0,i;
    for(i=0;i<6;i++)
    {
        cin>>a;
        if(a>0)
        {
            x++;
            sum +=a;

        }
    }
    y=sum/x;
    cout<<x<<" valores positivos"<<endl;
    cout<<fixed;
    cout<<setprecision(1)<<y<<endl;
    return 0;
}
