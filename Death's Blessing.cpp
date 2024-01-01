#include<bits/stdc++.H>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            int k;
           cin>>k;
        a.push_back(k);

        }
        for(int i=0;i<n;i++)
        {
            int l;
           cin>>l;
           b.push_back(l);
        }
        int z=0;
        long long sum=0;
         for(int i=0;i<n;i++)
        { //cout<<a[i]<<"\t"<<b[i]<<endl;
            sum+=a[i]+b[i];
            z=max(z,b[i]);

        }
        cout<<sum-z<<endl;
    }
    return 0;

}

