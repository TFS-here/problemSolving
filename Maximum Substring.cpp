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
        long long n,count=0,flag=0,z=0,o=0,m1=0,m0=0;;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            //cout<<o<<" "<<z<<" "<<m1<<" "<<m0<<endl;
            if(s[i]=='1')
            {
                o++;
                z=0;
                m1=max(m1,o);
            }
            if(s[i]=='0')
             {
                z++;
                o=0;
                m0=max(m0,z);
            }

        }
        //cout<<m1<<" "<<m0<<endl;
        long long one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')one++;
            else zero++;
        }
        count=one*zero;
        flag=max({m1*m1,m0*m0,count});
        cout<<flag<<endl;
    
    }
    return 0;
}