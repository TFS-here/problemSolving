#include<iostream>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int b;
        cin>>b;
        a[b]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
