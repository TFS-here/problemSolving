#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int a,sum=0,count=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>0)sum+=a;

        else if(a<0)
        {
            //cout<<sum<<endl;
           if(sum>0)sum+=a;

            else count++;
        }

    }
    cout<<count<<endl;
    return 0;
}
