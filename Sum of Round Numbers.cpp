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
        long long n,x,i=10,count=0;
        cin>>n;
        vector<long long>v;
        while(n>0)
        {
            x=n%i;
            n=n-x;
            //if(x==0)continue;
            v.push_back(x);
            //cout<<x<<endl;
            i*=10;
        }
        //cout<<v.size()<<endl;
        for (int i = 0; i <v.size(); i++)
        {
            if(v[i]==0){
               continue;}
            else
                count++;
           // cout<<v[i]<<endl;
        }
        cout<<count<<endl;
        for (int i = 0; i <v.size(); i++)
        {
            if(v[i]==0){
               continue;}
            else
                //count++;
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
