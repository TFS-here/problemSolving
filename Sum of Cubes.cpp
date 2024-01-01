#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        bool flag = false;
        for(long long i=1;i<=(int)(cbrt(n/2));i++)
        {
            long long l=i*i*i;
            long long m= n-l;
            long long b=ceil(cbrt(m));
            if(b*b*b==m&&m>0)
                {
                     flag=true;
                       break;

                       }

        }

         if(flag==true)
            cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;

    }
    return 0;
}
