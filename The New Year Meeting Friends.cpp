#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    int a=max({x,y,z});
    int b=min({x,y,z});
    cout<<a-b<<endl;
    return 0;
}