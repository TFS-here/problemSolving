#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string t="hello";int j=0,flag=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]==t[j])
        j++;
    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
