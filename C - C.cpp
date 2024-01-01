#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<__gcd((pow(5,n)+pow(7,n)),(pow(5,m)+pow(7,m)))<<endl;
    
    }
    return 0;
}