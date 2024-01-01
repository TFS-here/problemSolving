#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,count=0;
    cin>>T;
    while(T--)
    {
        int K;
        cin>>K;
        int a[K];
        for(int i=0;i<K;i++)
        {
            cin>>a[i];
            for(long long int i=1;i<1e+12;i++)
            {if(i/a[i]==0)
            count++;
            }
             if(count==K)cout<<i<<endl;
        }


    }
}
