#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int A,x=0;
    if(n>m)A=m;else if(n<m)A=n; else A=n;
    //cout<<(n-m)/2<<endl;
    if(A==m){
        x=(n-m)/2;
    }
    else
    x=(m-n)/2;
    cout<<A<<" "<<x<<endl;
    return 0;
}