#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    cout<<n/2<<endl;
    while(n>=4)
    {
        cout<<2<<" ";
        n-=2;
    }
    n==3?cout<<"3"<<endl:cout<<"2"<<endl;
    return 0;
}