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
        string s;
        cin>>s;
        int count=1;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            count++;
        }
        if(count<=7)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}