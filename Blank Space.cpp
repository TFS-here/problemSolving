#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
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
        int a[n];
        int count=0;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)count++;
            else if(a[i]!=0)
            {
                b.push_back(count);
                count=0;
            }
        }
        sort(b.begin(), b.end(), greater<int>());
        cout<<b[0]<<endl;
    }
    return 0;
}