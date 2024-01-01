#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int i,a=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=s[i-1])
            a++;
    }
    if(a&&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
        cout<<a<<endl;
    return 0;
}
