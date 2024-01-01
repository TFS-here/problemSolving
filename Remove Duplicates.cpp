#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i+1])
        v.erase(v.begin()+i);
    }

    //cout<<v.size()<<endl;
}


