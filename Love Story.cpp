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
        int count=0;
        string s;
        cin>>s;
         
        if(s[0]!='c')count++;
        if(s[1]!='o')count++;
        if(s[2]!='d')count++;
        if(s[3]!='e')count++;
        if(s[4]!='f')count++;
        if(s[5]!='o')count++;
        if(s[6]!='r')count++;
        if(s[7]!='c')count++;
        if(s[8]!='e')count++;
        if(s[9]!='s')count++;
    cout<<count<<endl;
    }
    return 0;
}