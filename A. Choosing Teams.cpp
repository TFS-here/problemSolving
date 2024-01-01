#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if((5-a[i])>=k)
        v.push_back(a[i]);
    }
    cout<<v.size()/3<<endl;
    
    
    return 0;
}