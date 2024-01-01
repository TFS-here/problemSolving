#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=(k*l)/nl;
    int y=(c*d);
    int z=p/np;
    int m=min(x,y);
    m=min(m,z);
    cout<<m/n<<endl;
    return 0;
}