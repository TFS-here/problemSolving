#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;
    if(k>(n+1)/2)
    {
        cout<<(k-((n+1)/2))*2<<endl;
    }
    else
        cout<<(k*2)-1<<endl;
return 0;
}
