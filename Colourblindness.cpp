#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s,r;
        cin>>s>>r;
        for(int i=0;i<n;i++)
        {
            if(r[i]=='B')
                r[i]='G';
             if(s[i]=='B')
                s[i]='G';
            if(s[i]!=r[i])
                count++;
            else if(s[i]=='R'&&r[i]!='R')
                count++;

        }
        if(count==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
