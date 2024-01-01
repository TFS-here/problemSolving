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
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
         s+=to_string(a[i]);
    }
    long long b= stoi(s);
    long long ans=0;
    if(b>90)
    {
        ans=b-(b%90);
        cout<<ans<<endl;
    }
    else
    cout<<"0"<<endl;
    return 0;
}