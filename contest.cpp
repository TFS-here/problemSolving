#include<iostream>
using namespace std;
int main()
{
    int t,n,a[100],b[100],c,d;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
            cin>>b[j];
            if(a[j]>a[j+1])
            {
            c=a[j]-a[j+1];
            }
            else
            c=a[j+1]-a[j];

            if(b[j]>b[j+1])
            {
            c=b[j]-b[j+1];
            }
            else
            {
            d=b[j+1]-b[j];
            }
        }
    }
    cout<<d<<endl;
    return 0;
}
