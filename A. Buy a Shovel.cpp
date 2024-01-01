#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=10;i++)
    {
        if((n*i)%10==0||(n*i)%10==k)
       { cout<<i<<endl;
        break;}
    }
    return 0;
}