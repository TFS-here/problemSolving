#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4'||n[i]=='7')
            count++;
    }
    if(count==n.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        int m=stoi(n);
        if(m%4==0||m%7==0||m%44||m%77||m%47||m%74)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
