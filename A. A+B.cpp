#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=toint(s[0]);
        int b=toint(s[2]);
        cout<<a+b<<endl;
    
    }
    return 0;
}