#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    int a;
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<t;i++)
    {
        if(v[i]==v[i+1])
            v.erase(i);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
