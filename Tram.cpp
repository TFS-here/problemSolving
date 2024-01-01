#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,c,d=0,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        s=(s-a)+b;
        if(s>d)
            d=s;

    }
    cout<<d<<endl;
    return 0;
}
