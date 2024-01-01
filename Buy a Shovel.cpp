#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m,digit=0;
    cin>>n>>m;
    while(n>=0)
    {
        n=n/10;
        digit++;
    }
    cout<<digit<<endl;

    
}