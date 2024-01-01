#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,m="Timur";
        cin>>s;
        sort(s.begin(),s.end());
        sort(m.begin(),m.end());
        if(s==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
