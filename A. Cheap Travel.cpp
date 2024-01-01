#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c=(n/m)*b+(n%m)*a;
    int d=(n*a);
    int ans=min(c,d);
    int e=(n/m)*b+b;
    cout<<min(ans,e)<<endl;
    return 0;
}