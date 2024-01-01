#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x>>y;
        int m=x.size();
        int n=y.size();
        int x1=0,x2=0;
        if(x[m-1]=='L')x1=3;
        if(x[m-1]=='M')x1=2;
        if(x[m-1]=='S')x1=1;
        if(y[n-1]=='L')x2=3;
        if(y[n-1]=='M')x2=2;
        if(y[n-1]=='S')x2=1;
        if(x1>x2){cout<<">"<<endl;}
        else if(x1<x2){cout<<"<"<<endl;}
        else if(x1==x2)
        {if(x1==1)
        {
            if(x.size()>y.size())cout<<"<"<<endl;
            else if(x.size()<y.size())cout<<">"<<endl;
            else
                cout<<"="<<endl;
        }
        else{
            if(x.size()>y.size())cout<<">"<<endl;
            else if(x.size()<y.size())cout<<"<"<<endl;
            else
                cout<<"="<<endl;
        }
        }


    }
    return 0;
}
