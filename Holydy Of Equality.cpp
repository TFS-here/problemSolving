#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    int count=0;
    for(int i=0;i<t;i++)
    {
        count+=(a[t-1]-a[i]);
    }
    cout<<count<<endl;
    return 0;
}