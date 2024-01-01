#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({-x,y});
    }
   sort(v.begin(),v.end());
   int e=v[k].first,u=v[k].second,count=0;
   for(int i=0;i<n;i++)
   {
       if(v[i].first==e&&v[i].second==u)
        count++;
   }
   cout<<count<<endl;
   return 0;
}
