#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a[3],k;

    for(int i=1;i<=t;i++)
    {
        cin>>a[0]>>a[1]>>a[2]>>k;
        sort(a,a+3);
      if(((a[2]-a[1])%k==0)&&(a[1]-a[0])%k==0&&(a[2]-a[0])%k==0)
          cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
        else
        cout<<"Case "<<i<<": "<<"Fight"<<endl;
    }
    return 0;
}
