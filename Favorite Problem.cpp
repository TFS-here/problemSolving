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
        int n;
        string s;
        cin>>n>>s;
        int a,b;
        for(int i=0;i<n;i++)
        {
            a=s[i];
            a>b?b=a:a=a;
        }
        cout<<b-98<<endl;
    
    }
    return 0;
}