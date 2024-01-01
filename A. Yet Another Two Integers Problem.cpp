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
        long long a,b;
        cin>>a>>b;
        long long m=abs(a-b);
        long long d=log10(m)+1;
        long long p=pow(10,d);
        if(a==b)
        cout<<0<<endl;
        else
        {
            if(m%10==0)
                cout<<((m%p)/10)<<endl;
            else
            cout<<(((m%p)/10)+1)<<endl;

        }


    }


    return 0;
}
