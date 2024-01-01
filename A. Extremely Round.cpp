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
        cin>>n;
        int d=(log10(n) + 1);
        int sum=9;
        if(n>9)
        {
        for(int i=1;i<=n;i++)
        {
            int a=(log10(i)+1);
            if(i>=10&&i<=100)
            if(i%(10)==0)sum++;
            else if(i>100&&i<=1000)
            if(i%(100)==0)sum++;
            else if(i>1000&&i<=10000)
            if(i%(1000)==0)sum++;
            else if(i>10000&&i<=100000)
            if(i%(10000)==0)sum++;
            else if(i>100000&&i<=1000000)
            if(i%(100000)==0)sum++;
        }
        }
        else
        sum=n;

        cout<<sum<<endl;
    
    }
    return 0;
}