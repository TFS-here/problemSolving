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
        int n,res=0;
        cin>>n;
        int digit=log10(n);
        if(n<10)cout<<n<<endl;
        else
        {
            res=9*digit;
            long long a=0;
            while(digit>=0)
            {
                a+=pow(10,digit);
                digit--;

            }
            //cout<<a<<endl;
            long long b=a;
            while(a<=n)
            {
                res++;
                a+=b;
            }
            cout<<res<<endl;

        }

    }
    return 0;
}

