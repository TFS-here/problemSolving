#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0;
    cin>>t;
    int s[t];
    for(int i=0;i<t;i++)
    {
        cin>>s[i];}
        sort(s,s+(t-1));
        for (int i = 0; i < t; i++)
        {
            if(s[i]!=s[i-1])
            n++;
        }

         cout<<n<<endl;
    return 0;
}
