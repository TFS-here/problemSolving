#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
     vector<int>v;
        for (int i = 1; i < 3000; i++)
        {
            if(i%3!=0&&i%10!=3)
            v.push_back(i);
        }
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<v[k-1]<<endl;
    
    }
    return 0;
}